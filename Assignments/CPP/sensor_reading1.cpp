#include <iostream>
using namespace std;
int range(int range){
    if(range < 0){
        return -1;
    }
    else if(range == 0 && range == 29){
        return 0;
    }    else if(range == 30 && range == 44){
        return 1;
    }    else if(range == 45 && range == 59){
        return 2;
    }    else {
        return 3;
    }
}
void StatusLabel(int s_code){
    switch(s_code){
        case -1 :
            cout<<"Status Label: SENSOR_ERROR "<<endl;
            cout<<"Action : Sensor fault — check wiring"<<endl;
            break;
        case 0 :
            cout<<"Status Label: NORMAL "<<endl;
            cout<<"Action : No action required"<<endl;
            break;
        case 1 :
            cout<<"Status Label: WARNING "<<endl;
            cout<<"Action :Alert sent to supervisor"<<endl;
            break;
        case 2 :
            cout<<"Status Label: CRITICAL "<<endl;
            cout<<"Action :Cooling system triggered"<<endl;
            break;
        default :
            cout<<"Status Label: SHUTDOWN "<<endl;
            cout<<"Action : Emergency shutdown initiated"<<endl;
    }
}

int main(){
    double reading;
    cout<<"Enter a reading : "<<endl;
    cin>>reading;

    double Fahrenheit = (reading * 9/5) +32;
    cout<<"Temperature : "<<reading<<"\u00B0C /"<<Fahrenheit<<"\u00B0F "<<endl;

    int s_code = range(reading);
    StatusLabel(s_code);

    (reading >= 25)?cout<<"Reading : Above Average ": cout<<"Reading : Below Average"<<endl;


}