#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include "Sales_data.h"
using std::string;

int main(void){
	Sales_data cons1;
	Sales_data cons2={"X-78345-XB"};
	Sales_data cons3={"X-78245-XX", 2, 69.69};
	Sales_data cons4={cin};
	
	print(cout,cons1) << endl;
	print(cout,cons2) << endl;
	print(cout,cons3) << endl;
	print(cout,cons4) << endl;
return 0;
}
