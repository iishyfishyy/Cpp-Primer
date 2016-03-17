#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <vector>
using std::vector;
#include <list>
using std::list;
#include <forward_list>
using std::forward_list;
#include <deque>
using std::deque;
#include <algorithm>

int main(void){
		
	vector<int> ivec{1,2,3,4,5,6,7,8,9};
	list<int> ilist;
	deque<int> ideq;
	forward_list<int> iflist;
	
	copy(ivec.begin(),ivec.end(),inserter(ilist,ilist.begin()));
	for(auto i : ilist)
		cout << i << " ";
	cout << endl;
	
	copy(ivec.begin(),ivec.end(),front_inserter(iflist));
	for(auto i : iflist)
		cout << i << " ";
	cout << endl;
	
	copy(ivec.begin(),ivec.end(),back_inserter(ideq));
		for(auto i : ideq)
		cout << i << " ";
	cout << endl;
	
	return 0;
}
