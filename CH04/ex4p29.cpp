#include<iostream>
using std::endl;
using std::cout;
using std::cin;

int main(void){
	
	int x[10];
	int *p = x;

	cout << sizeof(x)/sizeof(*x) << endl;	
	cout << sizeof(p)/sizeof(*p) << endl;

	cout << sizeof(x) << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(*x) << endl;
	cout << sizeof(*p) << endl;

return 0;
}
