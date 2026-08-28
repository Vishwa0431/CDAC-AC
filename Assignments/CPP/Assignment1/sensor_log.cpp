#include <iostream>
using namespace std;

void validReading(double arr[], int size){
    cout<< "valid readings : ";
    int skip_count =0;
    for(int i=0; i<size; i++){
        if(arr[i] < 0){
            skip_count++;
            continue;
        }
        cout<< arr[i]<< " ";
    }
    cout<< " \n Skipped (errors) : "<<skip_count<<endl;
}

void scanreading(double arr[],int size){
    for(int i=0; i< size ;i++){
        if(arr[i]>=45 ){
            cout<<"First CRITICAL : Index "<< i<< "-> "<< arr[i]<<" C"<<endl;
            break;
        }
    }
}
void findMinMax(double arr[],int size){
    double min = arr[0];
        double max = arr[0];
        double sum= 0;
        double count =0;
    for(int i=0; i< size; i++){
        if(arr[i] < 0){
            continue;
        }

        if(count == 0){
            min = arr[i];
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }

        sum += arr[i];
        count++;
            
    }
    double avg = sum / count;
    cout<< " Min : "<<min<<" C" <<" Max : "<<max << " C" << " Avg : "<<avg << " C" <<endl;
}
void countSitutation(double arr[],int size){
    int Normal =0;
    int Warning = 0;
    int Critical = 0;
    int Shutdown = 0;
    for(int i=0; i< size; i++){
        if(arr[i] >=0 && arr[i] <= 29){
            Normal++;
        }else if(arr[i] >= 30 && arr[i] <= 44){
            Warning++;
        }else if(arr[i] >= 45 && arr[i] <= 59){
            Critical++;
        }else if(arr[i] >= 60){
            Shutdown++;
        }
    }
    cout<< "Normal: "<<Normal<<" " << "Warning : " << Warning <<" " << "Critical : "<<Critical <<" "<< " Shutdown : "<<Shutdown <<endl;
}

int main(){
    int size;
    cout<<"readings Entered : ";
    cin>> size ;
    double arr[size];
    cout<<"Enter a readings : ";
    for(int i=0; i<size ; i++ ){
        cin>> arr[i];
    }
    validReading(arr, size);
    scanreading(arr, size);
    findMinMax(arr, size);
    countSitutation(arr, size);
}