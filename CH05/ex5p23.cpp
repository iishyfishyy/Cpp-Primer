#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<stdexcept>

int main(void){
	
	int i,j;

	cout << "Enter two integers: ";
	cin >> i >> j;
		
	if(j==0)
		throw std::	runtime_error("The value of second integer cannot be zero.");

	cout << i << " divided by " << j << " is " << (i/j) << "." << endl;

	return 0;
}

	
