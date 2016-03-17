#include<iostream>
#include<string>
using std::endl;
using std::cout;
using std::cin;
using std::string;

bool str_subrange(const string&, const string&);

int main(void){
	string one;
	string two;
	cin >> one >> two;
	cout << str_subrange(one,two) << endl;
	
	return 0;
}

bool str_subrange(const string &str1, const string &str2)
{
	if (str1.size()==str2.size())
		return str1==str2;

	auto size = (str1.size()<str2.size()) ? str1.size() : str2.size();
	for(decltype(size) i=0;i!=size;++i){
		if(str1[i]!=str2[i]){
			return (1>2);
		}
	}
}
