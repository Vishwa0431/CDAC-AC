#include <iostream>
using namespace std;

int main(){
    int statusReg = 10;
    int controlReg = 20;
    int dataReg = 50;

    const int *regPtr1 = &statusReg;
    cout << "######  regPtr1 : pointer to const int ###### " << endl;
    cout<<"regPtr1 :"<<*regPtr1<<endl;
     //*regPtr1 = dataReg;     assignment of read-only location '* regPtr1' (Error)
    // we cannot change the value of the const pointer  becoz it pointer to const int
    regPtr1 = &dataReg; // we can change address like this it is valid regPtr1 itself is not const
    // so it can point to another integer.

    //In const int * in this method we can change address of the decleration but we caanot change the value of pointer

    cout << "regPtr1  change   : " << regPtr1 << endl;
    cout << "regPtr1 : " << &regPtr1 << endl;// it shows the address of pointer
    cout << "----------------------------------------------------------" << endl;

    cout << "######  regPtr2 : const pointer to int ###### " << endl;

    int *const regPtr2 = &controlReg;
        cout << "regPtr2 : " << *regPtr2 << endl;

    cout << "regPtr2 : " << regPtr2 << endl;
    cout << "address of &regPtr2 : " << &regPtr2 << endl;
    *regPtr2 = dataReg;
    cout << "regPtr2 : " <<* regPtr2 << endl;
    //regPtr2 = &statusReg;// error: invalid conversion from 'int*' to 'int'
    // we cannot do like this in that we can only change the value of variable we cannot change the address of the  variable

    cout << "-------------------------------------------------------"<<endl;

    cout << " ###### regPtr3 : const pointer to const int ######" << endl;

    const int *const regPtr3 = &dataReg;
    cout << "regPtr3 : " << *regPtr3 << endl;
    cout << "regPtr3 : " << regPtr3 << endl;
    // assignment of read-only location
    // *regPtr3 = controlReg; // there are two constant so we cannot modify the value
    // *regPtr3 = &controlReg; //invalid conversion from 'int*' to 'int'
    // we cannot do like this because it is read only we cannnot change it not a value and not a address
}