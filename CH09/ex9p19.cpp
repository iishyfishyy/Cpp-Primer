#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <string>
using std::string;
#include <list>
using std::list;

int main(void){
	
	string temp;
	list<string> stringLst;
	

	while(cin >> temp)
		stringLst.push_back(temp);

	list<string>::iterator it1 = stringLst.begin();
	list<string>::iterator it2 = stringLst.end();

	while(it1!=it2){	
		cout << *it1 << " ";
		++it1;
	} cout << '\n' << std::flush;

return 0;
}
