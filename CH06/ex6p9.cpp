#include "chapter6.h"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main(void){

	cout << "Enter a number to recieve it's factorial: " << endl;
	int num;
	cin >> num;
	cout << "Factorial of " << num << " is " << fact(num) << endl;

return 0;

}
