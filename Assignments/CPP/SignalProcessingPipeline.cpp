#include <iostream>
#include <cmath>
using namespace std;


double computeRMS(double* signal, int n){
    double sum =0;
    for(int i=0; i<n; i++){
        double result = (*(signal +i)) * (*(signal + i));
        sum += result;
    }
    double sq = sqrt(sum / n);
    return sq;
    
}
void normalise(double* signal, int n){
    double max = 0;
    for (int i = 0; i < n; i++){
        if(abs(*(signal + i)) > max){
            max = abs(*(signal + i)); //we required a absolute max value 
        }
    }
    for (int i = 0; i < n;i++){
        *(signal + i) = *(signal + i) / max;
    }
}
int countZeroCrossings(double* signal, int n){
    int count = 0;
    for (int i = 0; i < n-1; i++){
        if((*(signal + i)) * (*(signal + i +1)) <0 ){
            count++;
        }
    }
    return count;
}
void applyGain( double * signal, int n, double gainFactor){
    for (int i = 0; i < n; i++){
        *(signal + i) = (*(signal + i)) * gainFactor;
    }
}
void printArray(double *signal , int n){
    for (int i = 0; i < n; i++){
        cout << *(signal + i) << " ";
    }
    cout << endl;
}

int main(){
    double signal[] {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};
    int n = 7;
    double gainFactor = 2.0;

    cout << "computeRMS : " << computeRMS(signal, n) << endl;

    cout << "Before normalise : ";
    printArray(signal, n);

    normalise(signal, n);

    cout << " After normalise : ";
    printArray(signal, n);

    cout << " Zero Crossing : " << countZeroCrossings(signal, n) << endl;

    cout << "Before applyGain : ";
    printArray(signal, n);

    applyGain(signal, n, gainFactor);

    cout << " After applyGain : ";
    printArray(signal, n);

}