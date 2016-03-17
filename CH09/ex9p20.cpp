#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<list>
using std::list;
#include<deque>
using std::deque;

int main(void){
	
	list<int> nums{0,1,2,3,4,5,6,7,8,9};
	deque<int> odds;
	deque<int> evens;

	auto beg=nums.begin();
	auto end=nums.end();
	
	while(beg!=end){
		if(*beg%2==0){
			evens.push_back(*beg);
		} else {
			odds.push_back(*beg);
		}
	++beg;
	}
	
	for(auto e:evens)
		cout << e << " ";
	cout << endl;

	for(auto o:odds)
		cout << o << " ";
	cout << endl;

return 0;
}
