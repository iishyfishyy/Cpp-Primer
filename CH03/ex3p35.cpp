#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::end;
int main(void){
	
	int array[]={1,2,3,4,5,6,7,8,9,0};
	
	for(auto i : array){	
		cout << i << " ";
	} cout << endl;

	int *aPtr = array;
	
	for(int *aPtr=array; aPtr!=std::end(array); aPtr++){
		*aPtr=0;
	}

	for(auto i : array){	
		cout << i << " ";
	} cout << endl;

return 0;

}
