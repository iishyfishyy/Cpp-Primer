#include<iostream>
using std::endl;
using std::cout;
#include<list>
using std::list;
#include<vector>
using std::vector;

int main(void){

	list<int> listOne={1,2,3,4,5,6,7,8,9};
	auto it1=listOne.begin();
	auto it2=listOne.end();	
	vector<double> vectorOne(it1,it2);
	
	for(auto i:vectorOne){
		cout << i << endl;
	}
return 0;
}
