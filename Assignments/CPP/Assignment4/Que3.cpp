#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

class DataProcessor{
public:
    virtual void loadData(const string& source) = 0;
    virtual void processData() = 0;
    virtual void exportResult(const string &destination) = 0;
    virtual string processorType() const = 0;
    virtual int recordCount() const = 0;

    virtual void printsummary() const{
        cout << "Processor type : " << processorType() << endl;
        cout << "Number of Record : " << recordCount() << endl;
    }

    virtual ~DataProcessor() = default;
};
class CSVProcessor : public DataProcessor{
    vector<string> records;
public:
    void loadData(const string& source) override{
        
        records.push_back({"apple"});
        records.push_back({"banana"});
        records.push_back({"orange"});
        records.push_back({"mango"});
        records.push_back({"grapes"});
    }
    void processData()override{
        for(string&  rec : records ){
            transform(rec.begin(), rec.end(), rec.begin(), [](unsigned char c) {
                return toupper(c);
        });
        }
    }
    void exportResult(const string &destination)override{
        cout << "[CSV EXPORT → [ " <<destination<< " ]" << endl;
        for(const string& rec : records){
            cout << rec <<endl;
        }

    }
    string processorType()const override{
        return "CSV Processor";
    }
    
    int recordCount()const override{
        return records.size();
    }
};
class SensorStreamProcessor : public DataProcessor{
    vector<double> reading;
    double mean = 0;
    double max = 0;
    double min = 0;

public:
    void loadData(const string& source) override{
        reading= {23.4, 21.8, 25.1, 30.2, 45.8, 23.7, 24.2};
    }
    void processData() override{
        double sum = 0;
        for (int i = 0; i <= reading.size(); i++){
            sum += reading[i];
        }
        mean = sum / reading.size();
        auto imin = min_element(reading.begin(), reading.end());
        min = *imin;

        auto imax = max_element(reading.begin(), reading.end());
        max = *imax;
    }

    void exportResult(const string &destination)override {
        cout << "[Sensor EXPORT → [ " << destination << " ]" << endl;
        cout<<"Mean : "<< mean << endl;
        cout << "Minimun : " << min << endl;
        cout << "Maximum : " << max << endl;
    }
    double getMean(){ //Bonus 
        return mean;
    }
    string processorType()const override{
        return "Sensor Stream Processor";
    }
    
    int recordCount()const override{
        return reading.size();
    }
};
int main(){
    //DataProcessor dp; //cannot declare variable 'dp' to be of abstract type
    //DataProcessor is a abstract class because it has a pure virtual function and we cannot create object od the abstract class
    vector<DataProcessor *> pipeline;
    pipeline.push_back(new CSVProcessor());
    pipeline.push_back(new SensorStreamProcessor());

    for(auto *p : pipeline){
        p->loadData("source_data");
        p->processData();
        p->printsummary();
        p->exportResult("output_dir");
        cout << "----------------" << endl;
    }
//Bonus
    for(auto *p : pipeline){
        if(auto *csv = dynamic_cast<CSVProcessor*> (p)){
            cout << "Found CSV Processor With " << csv->recordCount() << " records." << endl;
        }else if(auto *sensor = dynamic_cast<SensorStreamProcessor*> (p)){
            cout << "Founs sensor Processor - Mean: " << sensor->getMean() << endl;
        }
    }
    //static_cast is unsafe here because the element in pipeline are stored as DataProcessor* 
    // and this DataProcessor is points both CSVPrcessor and SensorProcessor
    //static cast work is to tell compiler the pointer is point only one but in this case is not possible because it point both functions
}