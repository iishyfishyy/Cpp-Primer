#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include "Sales_data.h"
#include <string>
using std::string;

int main(void){
	
	sdata info; 
	if(read(cin,info)){
		sdata temp;
			while(read(cin,temp)){
				if(info.isbn()==temp.isbn()){
					info.combine(temp);
				} else {
					print(cout,info) << endl;
					info=temp;
				}
			}
		print(cout,info) << endl;
	} else {
		cout << "no data?" << endl;
		return -1;
	}
	
return 0;
}


