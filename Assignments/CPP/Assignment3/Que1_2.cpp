#include <iostream>
#include<vector>
#include <string>
using namespace std;

using Header = pair < string, string >;
using HeaderList = vector<Header>;
using Port = unsigned int;
using IpAddress = string;

typedef unsigned long long RequestId;

printHeaders(const HeaderList& headers){
    cout << "Headers : " << endl;
    for (int i = 0; i < headers.size();i++){
        cout << headers[i].first << " : " << headers[i].second << endl;
    }
}

int main(){
    HeaderList headers = {
        {" Content-Type", "application/json"},
        {" Authorization ", "Bearer eyJhbGci..."},
        {" Accept-Language ", "en-US"}
    };

    Port serverPort = 8080;

    RequestId Request_ID = 174829384;

    cout << "Request ID : " << Request_ID << endl;
    cout << "Server Port : " << serverPort << endl;

    cout << endl;

    printHeaders(headers);
}