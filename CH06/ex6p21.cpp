#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<string>
using std::string;

int rLarge(int,int*);

int main(void){
	
	int a,b;
	cin >> a >> b;
	cout << "larger of " << a << " and " << b << " is " << rLarge(a, &b) << endl;
	return 0;
}

int rLarge(int x, int *y){
	return (x<*y) ? *y : x;
}
