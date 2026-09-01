#include <iostream>
using namespace std;

    double reorderCost(int qty, double unitPrice){
        double quantity = qty * unitPrice;
        return quantity;
    }

    double reorderCost(double qty, double unitPrice){
        double quantity = qty * unitPrice;
        return quantity;
    }

    double reorderCost(int qty, double unitPrice, double taxRate){
        int cost = qty * unitPrice;
        int  tax  = cost * taxRate /100;
        int total = cost +tax;
        return total;
    }
    double applyDiscount(double price, double discountPercent = 10.0){
        double discountamt = price * discountPercent / 100;
        double discount = price - discountamt;
        return discount ;
    }
int main(){
    int qty = 10;
    double unitPrice = 50;
    double taxRate = 18;

    cout<<"cost : " << reorderCost(qty, unitPrice) << endl;
    cout<<"Fractional cost : "<<reorderCost(10.5, unitPrice)<<endl;
    cout <<"Total with tax : "<< reorderCost(qty, unitPrice, taxRate) << endl;

    cout <<"discount : "<< applyDiscount(5000) << endl;
}