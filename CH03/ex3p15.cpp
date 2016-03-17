#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(void){

	vector<string> strvec;
	string s1;

	while(cin >> s1){
		strvec.push_back(s1);
	}
	
	for(auto ch : strvec){
		cout << ch << endl;
	}
	
return 0;

}
