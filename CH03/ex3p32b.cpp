#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<vector>
using std::vector;

int main(void){

	vector<int> one(10);
	vector<int> two(10);
	int i=0;

	for(auto it=one.begin(); it!=one.end(); ++it){
		*it=i;
		i++;
	}
	
	two = one;

	cout << "elements of one: ";
	for(auto o : one){
		cout << o << " ";
	} cout << endl;
	cout << "elements of two: ";
	for(auto o : two){
		cout << o << " ";
	} cout << endl;

return 0;

}
