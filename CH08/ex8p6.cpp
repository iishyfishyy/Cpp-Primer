#include <iostream>
using std::cout;
using std::endl;
#include "Sales_data.h"
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
using std::ofstream;

int main(int argc, char **argv){
	
	sdata info; 
	ifstream input(argv[1]);
	ofstream output("strings.txt");

	if(read(input,info)){
		sdata temp;
			while(read(input,temp)){
				if(info.isbn()==temp.isbn()){
					info.combine(temp);
				} else {
					print(output,info) << endl;
					info=temp;
				}
			}
		print(output,info) << endl;
	} else {
		cout << "no data?" << endl;
		return -1;
	}
	
return 0;
}
