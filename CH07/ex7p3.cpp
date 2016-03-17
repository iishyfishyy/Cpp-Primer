#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include "Sales_data.h"
#include <string>
using std::string;

int main(void){
	
	sdata info; 

	if(cin >> info.bookNo >> info.numSold >> info.revenue){
		sdata temp;
			while(cin >> temp.bookNo >> temp.numSold >> temp.revenue){
				if(info.isbn()==temp.isbn()){
					info.combine(temp);
				} else {
					cout << info.isbn() << " " << info.numSold << " " << info.revenue << endl;
					info=temp;
				}
			}
		cout << info.isbn() << " " << info.numSold << " " << info.revenue << endl;
	} else {
		cout << "no data?" << endl;
		return -1;
	}
	
return 0;
}

