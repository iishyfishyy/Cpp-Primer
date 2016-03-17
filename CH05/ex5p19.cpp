#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;

int main(void){

	char key;

	do{
	
		string s1,s2;
		cout << "enter string one: ";
		cin >> s1;
		cout << "enter string two: ";
		cin >> s2;
		if(s1==s2)
			cout << "s1 equal to s2" << endl;
		else {
		cout << ((s1<s2) ? "s1 is smaller" : "s2 is smaller");
		cout << endl;
		}
		cout << "again? y/n" << endl;
		cin >> key;
	
	} while (key!='n');

	cout << "You chose no, bye" << endl << endl;	

	return 0;

}
