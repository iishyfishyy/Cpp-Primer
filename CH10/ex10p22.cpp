#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <algorithm>
#include <functional>
using std::placeholders::_1;
using std::placeholders::_2;

bool checkSize(const string &s, int &sz){
	return s.size()<=sz;
}

int main(void){
	
	vector<string> svec;
	string temp;
	
	while(cin >> temp)
		svec.push_back(temp);
			
	auto checkNew = bind(checkSize, _1,6);
	
	for(auto it = svec.begin(); it!=svec.end(); ++it){
		bool temp = checkNew(*it);
		cout << temp << " ";
	}
	
	return 0;
}
