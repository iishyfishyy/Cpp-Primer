#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include "Sales_data.h"

int main(void){
	Sales_data total={cin};
	if(read(cin,total)){
		Sales_data trans={cin};
		while(read(cin,trans)){
			if (total.isbn()==trans.isbn()){
				total.combine(trans);
			} else {
				print(cout,total) << endl;
				total=trans;
			}
		}
		print(cout,total) << endl;
	} else {
		std::cerr << "No data?" << endl;
	}
return 0;
}
