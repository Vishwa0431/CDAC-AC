#include<iostream>
namespace Physics{
    double clamp(double val, double min, double max){
        if(val < min){
            return min;
        }
        else if(val>max){
            return max;
        }else
            return val;
    }
    double lerp(double a, double b, double t){
        return a + (b - a) * t;
    }
}
namespace GameMath
{
    int clamp(int val, int min, int max){
        if(val < min){
            return min;
        }
        else if(val>max){
            return max;
        }else
            return val;
    }
    double lerp(double a, double b, double t){
         return a + (b - a) * t;
    }
} 
int main(){


    std::cout<<"Physics result : " <<Physics::clamp(115.10,10.5,100.45)<< std::endl;
    std::cout <<"physics lerp result : "<<Physics::lerp(10, 20, 1.5)<< std::endl;

    std::cout <<"GameMath clamp  : "<<GameMath::clamp(110, 10, 99)<< std::endl;
    std::cout <<"GameMath lerp  : "<< GameMath::lerp(20.2 , 50.5, 5) << std::endl;

    {
        using namespace Physics;
        int clamp_phy = clamp(55, 10, 150);

        std::cout << " ans of clamp in scope : " << clamp_phy << std::endl;
    }

    {
        using namespace GameMath;
        int clamp_ans = clamp(45, 5, 100);

        std::cout << " ans of clamp in scope : " << clamp_ans << std::endl;
    }
}

