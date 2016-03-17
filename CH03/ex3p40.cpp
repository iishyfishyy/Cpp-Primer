#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
#include<cstring>

int main(void){
	
	char one[]="this is";
	char two[]="two";
	char dest[30];
	cout << dest << endl;	
	strcpy(dest, one);
	cout << dest << endl;
	strcat(dest, " .");
	cout << dest << endl;
	strcat(dest, "string ");
	cout << dest << endl;
	strcat(dest, two);	
	cout << dest << endl;

return 0;

}
