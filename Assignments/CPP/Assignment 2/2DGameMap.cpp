#include <iostream>
using namespace std;
int main(){
    int R, C;
    cout << "Enter a rows : " << endl;
    cin >> R;
    cout << "Enter a cols : "<< endl;
    cin >> C;
    int **tdArray = new int *[R];

    for (int i = 0; i < R; i++){
        tdArray[i] = new int[C];
    }
    cout << "Enter a Elements : " << endl;
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cin >> tdArray[i][j];
        }
    }
    cout << "========(" << R << " x " << C << ")========" << endl;

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C;j++){
            cout << tdArray[i][j] << " ";
        }
        cout << endl;
    }
    cout << " 0=Grass  1=Water  2=Mountain  3=Forest  4=Dungeon" << endl;

    int Grass = 0;
    int Water = 0;
    int Mountain = 0;
    int Forest = 0;
    int Dungeon = 0;
    cout << "Title count :" << endl;
    cout << endl;

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C;j++){
            if(tdArray[i][j] == 0){
                Grass++;
            }else if(tdArray[i][j] ==1){
                Water++;
            }else if(tdArray[i][j] ==2){
                Mountain++;
            }else if(tdArray[i][j] ==3){
                Forest++;
            }else if(tdArray[i][j] ==4){
                Dungeon++;
            }
        }
    }
    cout << "Grass     : " << Grass<<endl;
    cout << "Water     : " << Water<<endl;
    cout << "Mountain  : " << Mountain<<endl;
    cout << "Forest    : " << Forest<<endl;
    cout << "Dungeon    : " << Dungeon<<endl;

    for (int i = 0; i < R; i++){
        delete[] tdArray[i];
    }
    delete[] tdArray;

    
}