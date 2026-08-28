#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    if(argc < 4){
        cout<<" Usage : ./sensor_monitor <warn_threshold> <critical_threshold> <num_readings> Error : Missing arguments. " << endl;
        return 1;
    }
    else{
        int warn = stoi(argv[1]);
        int critical = stoi(argv[2]);
        int num_Reading = stoi(argv[3]);

        if(warn >= critical ){
            cout<<"Threshold Error ."<<endl;
            return 1;
        }else if(num_Reading <1 || num_Reading  > 500){
            cout<<" reading error ."<<endl;
            return 1;
        }

        int Normal = 0;
        int Warning =0;
        int Critical =0;
        int Shutdown = 0;
        for(int i=0; i< num_Reading; i++){
            int temperature = rand() % 70;
            if(temperature >= 0 && temperature<=29 ){
                Normal ++;
            }else if(temperature >= 30 && temperature<=44 ){
                Warning++;
            }else if(temperature >= 45 && temperature<=59 ){
                Critical ++;
            }else{
                Shutdown++;
            }
        }
        cout<< " Config :" <<"Warn = "<<warn<<" C"<<"  Critical = "<<critical<< " C"<<" Readings = "<<num_Reading<< endl;

        cout<<"Results : Normal :"<<Normal<< " Warning :"<<Warning<<" Critical :"<<Critical<< " Shutdown :"<<Shutdown<<endl;
    }
}