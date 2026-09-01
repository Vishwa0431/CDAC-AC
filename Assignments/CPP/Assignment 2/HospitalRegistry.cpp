#include <iostream>
using namespace std;
class Patient{
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup;
public :
    Patient(): patientId(0), name(""), age(0), ward("General"), bloodGroup("O+"){
        cout<<"[Constructor] Default patient registered. "<<endl;
    }

    Patient(int id, const string& n): patientId(id), name(n),age(0), ward("Emergency"), bloodGroup("O+"){     
        cout<<"[Constructor] Emergency: "<<name<<endl;
    }
    Patient(int id, const string& n, int ag, const string& wrd, const string& bg): patientId(id),name(n),age(ag),ward(wrd),bloodGroup(bg){
        cout<<"[Constructor] Full admission: "<<name<<endl;
    }
    void displayRecord() const{
        cout << "=========Patient Record:==========" << endl;
        cout << "Id           :" << patientId<< endl;
        cout << "Name         :" << name<< endl;
        cout << "Age          :" << age<< endl;
        cout << "Ward         : " << ward<< endl;
        cout << "Blood Grp    : " << bloodGroup << endl;
    }
    void transferWard(const string& newWard){
        cout << "Ward Transfer : " << name << " -> " << newWard << endl;
        ward = newWard;
    }

    ~Patient(){
        cout << "[Destructor] Patient " << name << " discharged." << endl;
    }
};
int main(){
    
    Patient p1(1001, "Merra Joshi", 34, "Cardiology", "B+");
    Patient p2(1002, "Raj Patel");
    Patient p3;
    Patient *arr = new Patient[4];

    for (int i = 0; i < 4; i++){
        arr[i];
    }
    p1.displayRecord();
    cout << endl;
    p2.transferWard("ICU");
    cout << endl;
    delete[] arr;
}