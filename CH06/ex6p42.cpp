#include<iostream>
using std::endl;
using std::cout;
#include<string>
using std::string;

string make_plural(size_t ctr, const string&, const char ending = 's');

int main(void){
		
		string s1="success";
		string s2="failure";
		cout << s1 << " " << make_plural(sizeof(s1),s1) << endl;
		cout << s2 << " " << make_plural(sizeof(s2),s2) << endl;
		
	return 0;
}

inline string make_plural(size_t ctr, const string& word, const char ending)
{
	return (ctr>1) ? word+ending : word;
}
