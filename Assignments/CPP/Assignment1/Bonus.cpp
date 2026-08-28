#include <iostream>
using namespace std;

struct Layout1 { char c1; int i; char c2; };
struct Layout2 { int i; char c1; char c2; };

//layout 1 and layout 2 contain same members but their order is different
//in Layout1 : char, int, char . generaly char is 1 byte and int is 4 byte
// as per this in layout 1 = 1 + 4 + 1 = 6 byte but after compile the compiler is insert padding so that i start at their aligned address

//Layout 2 : int char char in this case the int is already at the starting so no padding
//but at the last char are there  4+ 1+ 1 = 6 it make approx = 8 so padding is added at the end to satisfy the alignment

//the order of member is affect the padding amount  

// in layout 2 the first is int it take 4 byte in this case the char after int will take 2 2 bytes and it stop at 8 bytes 

int main(){
	cout << "Size of Layout1: " << sizeof(Layout1) << " bytes" << endl; 
	//layout1 it takes 12 bytes means it takes 4 bytes for all 4+4+4 = 12
	
	cout << "Size of Layout2: " << sizeof(Layout2) << " bytes" << endl;
}// Layout 2 : it takes 8 byte  it more effienct to declare variables in order

//padding is a extra unused memory space that inserted by compiler to the variables 
// to avoiding wastage of memoery then variables should be declare in a order

