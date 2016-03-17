#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <vector>
using std::vector;
#include <list>
using std::list;
#include <algorithm>

int main(void){
		
	vector<int> ivec;
	list<int> ilist;
	int temp;
	
	while(cin >> temp)
		ivec.push_back(temp);
		
	sort(ivec.begin(),ivec.end());	
	unique_copy(ivec.begin(),ivec.end(),back_inserter(ilist));
	
	for(auto i : ilist)
		cout << i << " ";
	cout << endl;
	
	return 0;
}
