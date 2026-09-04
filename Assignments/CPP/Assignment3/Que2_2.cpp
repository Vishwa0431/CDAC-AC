#include<iostream>
#include <memory>
using namespace std;

class Shared{
    string name;
    string type;

public:
    Shared(){
        cout << "default const...." << endl;
    }
    Shared(string name , string type):name(name), type(type){
        cout << "[Shader Compiled]" << endl;
    }
    ~Shared(){
        cout << "[Shader Destroyed]" << endl;
    }
    int getRefernceCount(shared_ptr<Shared> ptr){
        return ptr.use_count();
    }
};
int main(){
    auto shader =make_shared<Shared>("main_vert","vertex");
    cout <<"Ref count: "<< shader.use_count() << endl;

    {
    auto rendererRef = shader;
    cout <<"Ref count: "<< shader.use_count() << endl;
    auto editorRef = shader;
    cout <<"Ref count: "<< shader.use_count() << endl;
    }
    cout <<"Ref count: "<< shader.use_count() << endl;
}