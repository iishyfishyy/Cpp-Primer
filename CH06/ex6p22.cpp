#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<string>
using std::string;

void swap(int*,int*);

int main(void){

	int a,b;
	cin >> a >> b;
	swap(&a, &b);
	cout << a << " " << b << endl;

	return 0;
}

void swap(int *i, int *j){		
	int temp;
	temp=*i;
	*i=*j;
	*j=temp;
}
