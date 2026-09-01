#include <iostream>
using namespace std;

int level = 1;
    
namespace Engine{
    string name;
    namespace Audio {

        void playSound(string name){
            cout << "Playing : " << name << endl;
        }
}
}

int main(){
    int level= 20;

    cout << "Global value  : " << ::level << endl;
    cout << "Local value : " << level << endl;

    cout << "nested namespce : " << endl;
    
    Engine::Audio::playSound("sword_clash") ;
}