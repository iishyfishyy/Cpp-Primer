#include <iostream>
using std::endl;
using std::cout;
#include <vector>
using std::vector;
#include <list>
using std::list;
#include <string>
using std::string;

int main(void){
	
	list<char*> old = {"this","is","sprata"};
	vector<string> _new;
	cout << *old[0];
	_new.assign(old.begin(),old.end());
	
	for(auto i:_new){
		cout << i << endl;
	}
	
return 0;
}
