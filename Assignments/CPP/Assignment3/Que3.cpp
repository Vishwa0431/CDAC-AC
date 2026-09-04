#include<iostream>
#include <cstring>
using namespace std;

class LogBuffer{
    char* buffer;
    int capacity;
    int size;

    mutable int accessCount =0; //bonus
    static int instanceCount;
public:
    
    LogBuffer(int capacity): capacity(capacity), size(0){
        buffer = new char[capacity + 1];
        buffer[0] = '\0';
        instanceCount++;
        cout << "[LogBuffer Created] capacity = " << capacity << endl;
    }

    // Copy Constructor
    LogBuffer(const LogBuffer& L){
        capacity = L.capacity;
        size = L.size;
        buffer = new char[capacity + 1];
        for (int i = 0; i <= size; i++){
        buffer[i] = L.buffer[i];
        }
        instanceCount++;
        cout << "[LogBuffer Deep Copied] capacity = " << capacity << endl;
    }

    LogBuffer& operator=(const LogBuffer& L){
        if(this == &L){
            cout << "[Self-assignment detected — no operation] " << endl;
            return *this;
        }

        delete[] buffer;

        capacity = L.capacity;
        size = L.size;
        buffer = new char[capacity + 1];
        for (int i = 0; i <= size; i++){
        buffer[i] = L.buffer[i];
        }
        cout << "LogBuffer Assigned] " << endl;

        return *this;
    }

    ~LogBuffer(){
        delete[] buffer;
        instanceCount--;
        cout << "[LogBuffer Destroyed] " << endl;
    }

    void append(const char* msg){
        int space = capacity - size;
        int length = strlen(msg);

        if(length > space){
            length = space;
        } 
        for (int i = 0; i < length; i++){
            buffer[size + i ] = msg[i];
        }
        size += length;
        buffer[size] = '\0';
    }

    void print() const{
        cout << buffer << endl;
        accessCount++;
    }

    void clear(){
        size = 0;
        buffer[0] = '\0';
    }

    static int getInstanceCount(){
        return instanceCount;
    }

    //Bonus que
    int getAccessCount() const{
        return accessCount;
    }
    

};
int LogBuffer::instanceCount = 0;
int main(){
// Objective 1 : Basic usage
LogBuffer log1(256);
log1.append("Server started on port 8080");
log1.append(" | Request received from 192.168.1.10");
log1.print();
// Objective 2 : Deep copy via copy constructor
LogBuffer log2 = log1;
// copy constructor
log2.append (" | Cached response sent");
cout <<"log1 : ";
log1.print();
// must NOT contain log2's append
cout <<"log2 : "; log2.print();
// Objective 3 : Copy assignment operator
LogBuffer log3(128);
log3 = log1;
// copy assignment
log3.print();
// Objective 4 : Self-assignment guard
log1 = log1;
// must not crash or corrupt data
log1.print();
// Objective 5 : Static member
cout <<"Live LogBuffer objects : "<< LogBuffer::getInstanceCount() << endl;

//bonus main
cout << "=========Bonus output =================" << endl;
const LogBuffer readOnly(log1);
readOnly.print();
readOnly.print();
readOnly.print();
cout << endl;
cout <<"Times printed: "<< readOnly.getAccessCount() << endl;
}
//constant is a member function that is not modify the object normal data member
//const keyword also provide same like constant member function that  not allowed to modify the const keyword function
//mutable function is a allowed to change even it inside a const function .mutable is use to change or modify  const function
