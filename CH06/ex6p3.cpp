#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int fact(int num){
	
	int f=1;

	while(num>1){
		f*=num--;
	}

return f;
}

int main(void){

	cout << "Enter a number to recieve it's factorial: " << endl;
	int num;
	cin >> num;
	cout << "Factorial of " << num << " is " << fact(num) << endl;

return 0;

}


