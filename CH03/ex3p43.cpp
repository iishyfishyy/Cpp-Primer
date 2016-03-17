#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<vector>
using std::vector;
using std::end;
using std::begin;
int main(void){
	
	int ia[3][2]={{1,2},{3,4},{5,6}};
	
	cout << endl;
	cout << "Using RANGE FOR: " << endl;
	for(auto &i:ia){
		for(auto &a:i){
			cout << a << " ";
		}
	} cout << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;

	cout << "Using FOR LOOP: " << endl;
	for(size_t i=0;i!=3;++i){
		for(size_t j=0;j!=2;++j){
			cout << ia[i][j] << " ";
		}
	} cout << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;	

	cout << "Using FOR LOOP W/ POINTERS: " << endl;
	for(auto p=ia; p!=ia+3; ++p){
		for(auto i = *p; i!=*p+2; ++i){
			cout << *i << " ";
		}
	} cout << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;	

return 0;

}
