#include <iostream>
using namespace std;

enum class HttpStatus
{
    OK = 200,
    Created = 201,
    BadRequest = 400,
    Unauthorized = 401,
    NotFound = 404,
    ServerError = 500
};

void handleResponse(HttpStatus status, const string& endpoint){

    int code = static_cast<int>(status);

    switch(code){
        case 200 :
            cout << "[ "<<endpoint<<" ]        -> " << code << " OK                :  Request successful" << endl;
            break;
        case 201:
            cout << "[ "<<endpoint<<" ]      -> " << code << " Created           :  successfully created" << endl;
            break;
        case 400:
            cout << "[ "<<endpoint<<" ]      -> " << code << " Bad Request       :  Client sent an invalid request" << endl;
            break;
        case 401:  
            cout << "[ "<<endpoint<<" ]        -> " << code << " Unauthorized      :   Authentication required" << endl;
            break; 
        case 404:
            cout << "[ "<<endpoint<<" ]   -> " << code << " Not Found         :  Endpoint does not exist[" << endl;
            break;
        case 500:
            cout << "[ "<<endpoint<<" ]        -> " << code << " Server Error      :  Internal server error — retry later" << endl;
            break;
        default:
            cout << "Invalid status code " << endl;
    }
}
int main(){

    handleResponse(HttpStatus::OK," GET /api/users" );

    handleResponse(HttpStatus::Created, " POST /api/users ");

    handleResponse(HttpStatus::BadRequest, " POST /api/users ");

    handleResponse(HttpStatus::Unauthorized, "POST /api/login");

    handleResponse(HttpStatus::NotFound, "GET /api/products/99");

    handleResponse(HttpStatus::ServerError, "POST /api/order");
}