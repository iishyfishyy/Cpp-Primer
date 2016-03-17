#include<iostream>
using std::cout;
using std::endl;
using std::cin;

double abs(double num){
	
	double x = (num<0) ? num*(-1) : num;

return x;
}

int main(void){

	cout << "Enter a number to recieve it's absolute value: " << endl;
	double num;

	cin >> num;
	cout << "Absolute value of " << num << " is " << abs(num) << endl;

return 0;

}


