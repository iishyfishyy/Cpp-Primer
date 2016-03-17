#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<vector>
using std::vector;
using std::end;
using std::begin;
int main(void){

	int array[]={1,2,3,4,5,6,7,8,9,0};
	vector<int> vect(begin(array),end(array));

	for(auto i:vect){
		cout << i << " ";
	} cout << endl;
	for(auto &i:vect){
		i*=i;
		cout << i << " ";
	} cout << endl;
//---------------------------------------------------------
	int n=0;
	for(auto i:vect){
		array[n]=i;
		++n;
	}
	
	for(auto x:array){
		cout << x << " ";
	} cout << endl;			

return 0;
}
