#include<iostream>
#include <memory>
using namespace std;

class AudioClip{
    string name;
    double time;

public:
    AudioClip(){
        cout << "Default ..." << endl;
    }
    AudioClip(string name, double time): name(name), time(time){
        cout << "para..." << endl;
    }
    string getName(){
        return name;
    }
    ~AudioClip(){
        cout << "destruct..." << endl;
    }
};
int main(){
    auto audio = make_shared<AudioClip>("explosion", 3.5);
    weak_ptr<AudioClip> observer = audio;

    if(auto clip = observer.lock()){
        cout << "Clip alive " << clip->getName() << endl;
    }
    audio.reset();
    if(observer.expired())
        cout <<"Clip already unloaded."<< endl;
}