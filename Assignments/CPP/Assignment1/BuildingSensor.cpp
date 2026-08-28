#include <iostream>
using namespace std;

void HottestRoom(double arr[3][3]){
    double max= arr[0][0];
    int room = 0;
    int floor = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
        floor = i+1;
        room = i+1;
    }
    cout<<"Hottest Room : Floor "<< floor<<","<<" Room " <<room <<" → "<< max << " C"<<endl;
}
void HottestFloor(double arr[3][3]){
    double max = ((arr[0][0] + arr[0][1]+ arr[0][2])/3 );
    int floor =0;
    double avg;
    for(int i=0; i<3; i++){
            double sum =0;
        for(int j= 0; j<3; j++){
            sum += arr[i][j];
        }
        avg = sum /3;
         if(max < avg){
            max = avg;
        }
        floor = i;
    }

       
    cout<<"Hottest Floor : Floor "<<floor<<" (avg " << max << " °C)"<<endl;
}

void Warning(double arr[3][3]){
    int count =0;
    for(int i=0 ;i<3; i++){
        for(int j=0; j< 3; j++){
            if(arr[i][j] >= 30 ){
                count ++;
            }
        }
    }
    cout<<"Rooms at WARNING or above : "<< count;
}
int main(){

    double arr[3][3];
    cout<<"Enter the temperature of all 9 rooms : "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cin>> arr[i][j];
        }
    }

    cout<<"\t Room1 \t Room2 \tRoom3"<<endl;
    for(int i=0; i<3; i++){
                cout<<"Floor  "<<i+1<<" :  ";
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<< " \t ";
        }

        cout<< endl;
    }

    HottestRoom(arr);
    HottestFloor(arr);
    Warning(arr);
}