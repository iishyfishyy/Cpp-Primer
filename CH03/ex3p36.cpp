#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::end;
#include<vector>
using std::vector;

int main(void){
	
	cout << "arrays: " << endl;
	int array[]={1,2,3,4,5,6,7,8,9,0};
	int array2[]={1,2,4,3,5,7,6,8,9,0};
	
	int *ptr;
	int *ptr2;
	for(ptr=array,ptr2=array2; ptr!=end(array),ptr2!=end(array2); ptr++,ptr2++){
		if(*ptr==*ptr2){
			cout << *ptr << " and " << *ptr2 << " are equal." << endl;
		} else {
			cout << *ptr << " and " << *ptr2 << " are NOT equal." << endl;
		}
	}	
	
	cout << "vectors: " << endl;
	vector<int> one{1,2,3,4,5,6,7,8,9,0};
	vector<int> two{1,2,4,3,5,7,6,8,9,0};	
	 
	decltype(one.begin()) it;
	decltype(one.begin()) it2;
	for(it=one.begin(),it2=two.begin(); it!=one.end(), it2!=two.end(); it++, it2++){
		if(*it==*it2){
			cout << *it << " and " << *it2 << " are equal." << endl;
		} else {
			cout << *it << " and " << *it2 << " are NOT equal." << endl;
		}
	}

return 0;

}
