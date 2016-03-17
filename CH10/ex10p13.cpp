#include <iostream>
using std::endl;
using std::cin;
using std::cout;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <algorithm>

bool fiveChar(const string&);

int main(void){
	
	vector<string> input;
	string temp;
	
	while(cin >> temp)
		input.push_back(temp);
		
	vector<string>::iterator it = std::partition(input.begin(),input.end(), fiveChar);
	vector<string>::iterator beg = input.begin();
	
	while(beg!=it){
		cout << *beg << " ";
		++beg;
	} 
	
	return 0;
}

bool fiveChar(const string& s){
	
	return s.size()>=5;
	
}
