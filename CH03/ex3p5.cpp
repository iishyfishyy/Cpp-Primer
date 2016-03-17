#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;

int main(void){
	
	string s;
	string full;

	while(cin >> s){
		full+=s+" ";
	}
		
	cout << full << endl;

return 0;

}
