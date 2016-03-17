#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void){
		
	string s1, s2;
	
	getline(cin,s1);
	getline(cin,s2);

	if(s1==s2){
		cout << "Yay! String sizes are equal." << endl;
	} else if (s1>s2){
		cout << "String 1 is bigger than String 2" << endl;
	} else {
		cout << "String 2 is bigger than String 1" << endl;
	}

	if(s1.size()==s2.size()){
		cout << "Both string lengths equal " << s1.size() << endl;
	} else if (s1.size()>s2.size()){
		cout << "Size of String 1 is " << s1.size() << " and size of String 2 is " << s2.size() << endl;
	} else {
		cout << "Size of String 1 is " << s1.size() << " and size of String 2 is " << s2.size() << endl;
	}

return 0;

}
