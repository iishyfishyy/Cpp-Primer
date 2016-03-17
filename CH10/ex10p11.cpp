#include <iostream>
using std::endl;
using std::cin;
using std::cout;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <algorithm>

void removeDuplicate(vector<string>&);
bool isShorter(const string&, const string&);

int main(void){
	
	vector<string> input;
	string temp;
	
	while(cin >> temp)
		input.push_back(temp);
	
	removeDuplicate(input);
		
	stable_sort(input.begin(),input.end(),isShorter);
	
	for(auto& ch : input)
		cout << ch << " ";
	cout << endl;
	
}

void removeDuplicate(vector<string>& input){
	std::sort(input.begin(),input.end());
	auto end_unique = unique(input.begin(),input.end());
	input.erase(end_unique, input.end());
}

bool isShorter(const string& s1, const string &s2){
	return s1.size()<s2.size();
}
