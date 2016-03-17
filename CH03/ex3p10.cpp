#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(void){

	string str;
	cin >> str;
	
	string nopunct;
	
	for(auto c : str){
		if(!ispunct(c)){
			nopunct+=c;
		}
	}
	
	cout << nopunct << endl;	
	
return 0;

}
