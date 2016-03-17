#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<string>
using std::string;

bool isShorter(const string &s1, const string &s2);

int main(void){
		string s1;
		string s2;
		cout << "insert string one followed by string two: ";
		cin >> s1 >> s2;
		cout << isShorter(s1,s2) << endl;
	return 0;
}

inline bool isShorter(const string &s1, const string &s2){
	return s1.size()<s2.size();
}
