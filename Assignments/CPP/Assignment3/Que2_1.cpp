#include <iostream>
#include <memory>
using namespace std;

class Texture{
    string name;
    int width;
    int height;
public:
    Texture():name(" "),width(0), height(0){
        cout << "default constuctor..." << endl;
    }
    Texture(string name, int width, int height):name(name), width(width), height(height){
        cout << "[Texture Loaded ]" << endl;
    }
    ~Texture(){
        cout << "[Texture Released]" << endl;
    }
    void display() const{
        cout << "Name : " << name << endl;
        cout << "Width : " << width << endl;
        cout << "Height : " << height << endl;
    }
};
int main(){
    auto tex1 =make_unique<Texture>("player_sprite",512,512);
    tex1->display();

    //unique_ptr<Texture> tex2 = tex1; error: use of deleted function 'std::unique_ptr<_Tp, _Dp>
    //  it not allowed bcoz unique-ptr has only one resource is aalocated it 
      //unique_ptr does not have more than one owener  it is a sole owner of it thats why we cannot copy it in another

    unique_ptr<Texture> text2 = move(tex1);
    cout <<"tex1 is null: "<< (tex1 == nullptr ? "YES":"NO") << endl;
}
