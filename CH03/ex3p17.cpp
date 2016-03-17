#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void){
		
	string words;
	vector<string> vWords;

	/* while(getline(cin,words)){
		vWords.push_back(words);
	}
	
	for(auto &word : vWords){
		for(auto &ch : word){
			ch = ::toupper(ch);
			cout << ch;
		}	
	}
	cout << endl;*/

	while(cin >> words){
		vWords.push_back(words);
	}

	for(auto &word : vWords){
		for(auto &ch : word){
			ch=toupper(ch);
			cout << ch;
		}
	cout << endl;
	}


return 0;

}	
