#include <iostream>
using std::endl;
using std::cout;
#include <vector>
using std::vector;
#include <list>
using std::list;

int main(void){
	
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> ints;
	
	for (int i=0; i!=sizeof(ia)/4; ++i){
		ints.push_back(ia[i]);
	}

	for(auto num : ints)
		cout << num << " ";
	cout << endl;

	vector<int>::iterator it1 = ints.begin();
	vector<int>::iterator it2 = ints.end();
	list<int> lists(it1,it2);
	while(it1!=it2){
		if(!(*it1%2))			
			it1 = ints.erase(it1);
		else
			++it1;
	}
	for(auto num : ints)
		cout << num << " ";
	cout << endl;

	list<int>::iterator L_it = lists.begin();
	while(L_it!=lists.end()){
		if(*L_it%2)
			L_it = lists.erase(L_it);
		else	
			++L_it;
	}
	for(auto num : lists)
		cout << num << " ";
	cout << endl;


return 0;
}
