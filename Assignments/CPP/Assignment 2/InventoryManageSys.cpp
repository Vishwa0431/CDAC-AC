#include <iostream>
using namespace std;
class Product{
    int productId;
    string name;
    double price;
    int quantity;
public: 
    void setProductId (int Id ){
        productId = Id;
    }
    void setName (const string& n ){
        name = n;
    }
    void setPrice (double prc ){
        price = prc;
    }
    void setQuantity (int qty ){
        quantity =qty;
    }
    int getProductId()const{
        return productId;
    }
    string getName()const{
        return name;
    }
    double getPrice()const{
        return price;
    }
    int getQuantity()const{
        return quantity;
    }
    void acceptDetails(){
        int Id;
        string n;
        double prc;
        int qty;
        cout << "Enter a ProductID : " << endl;
        cin >> Id;
        setProductId(Id);

        cout << "Enter the Name : " << endl;
        getline(cin >>ws, n);
        setName(n);

        cout << "Enter the Price : " << endl;
        cin >> prc;
        setPrice(prc);

        cout << "Enter the Quantity : " << endl;
        cin >> qty;
        setQuantity(qty);
    } 
    void displayDetails() const{
        cout << productId << " \t" << name << " \t" << price << " \t" << quantity << " \t" << totalvalue() << endl;
    }
    double totalvalue() const{
        double total_val = price * quantity;
        return total_val;
    }
    bool isLowStock(int threshold) const{
        return quantity < threshold;
    }
};
int main(){
    int size;
    cout << " enter a size of the array : " << endl;
    cin >> size;
    Product arr[size];
    for (int i = 0; i < size; i++){
        arr[i].acceptDetails();
    }
    cout << "====== INVENTORY REPORT ======" << endl;
    cout << " ID \t Name \t Price \t Qty \t Total Value " << endl;
    for (int i = 0; i < size; i++){
        arr[i].displayDetails();
    }
    double  max = arr[0].totalvalue();
    int maxI = 0;
    for (int i = 0; i < size; i++){
        if(arr[i].totalvalue() > max){
            max = arr[i].totalvalue();
            maxI = i;
        }
    }
    cout << "Highest Value Product : "<<arr[maxI].getName()<<" ( RS. "<<max <<" )" <<endl;
    int threshold;
    cout << "Enter a threshold : " << endl;
    cin >> threshold;
    for (int i = 0; i < size; i++){
        if(arr[i].isLowStock(threshold)){
            cout << "Low Stock (threshold: "<< threshold<< " ) : " <<arr[i].getName();
        }
    }
}