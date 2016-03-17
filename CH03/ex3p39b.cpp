#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
#include<cstring>

int main(void){
	
	char one[]="abcdefg";
	char two[]="abcdeff";

	if(strcmp(one,two)==0){
		cout << "strings are equal" << endl;
	} else if (strcmp(one,two)<0){
		cout << "string one is less than string two" << endl;
	} else { 
		cout << "string two is less than string one" << endl;
	}	
	
return 0;

}
