#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;

int main(void){
	
	string one;
	string two;
	cout << "string one is: ";
	getline(cin,one);
	cout << "string two is: ";
	getline(cin,two);	
	
	if(one==two){
		cout << "string one is equal to string two" << endl;
	} else if (one < two){
		cout << "string one is less than string two" << endl;
	} else {
		cout << "string two is less than string one" << endl;
	}

return 0;

}
