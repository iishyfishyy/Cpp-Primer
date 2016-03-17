#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <string>
using std::string;
#include <deque>
using std::deque;

int main(void){
	
	string temp;
	deque<string> stringDeq;
	
	while(cin >> temp)
		stringDeq.push_back(temp);

	deque<string>::iterator it1 = stringDeq.begin();
	deque<string>::iterator it2 = stringDeq.end();

	while(it1!=it2){	
		cout << *it1 << " ";
		++it1;
	} cout << '\n' << std::flush;

return 0;
}
