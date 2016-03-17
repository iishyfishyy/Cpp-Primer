#include<iostream>
using std::endl;
using std::cout;
using std::cin;

using ex = int[5];

ex &arrptr(int);
int odd[]={1,3,5,7,9};
int even[]={0,2,4,6,8};

int main(void){

	arrptr(2);
	arrptr(1);
	for(auto c:arrptr(3)){
		cout << c << endl;	
	}
	return 0;
}

ex &arrptr(int i)
{
	return (i%2) ? odd : even;
}
