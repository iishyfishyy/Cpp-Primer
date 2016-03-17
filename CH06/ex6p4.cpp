#include<iostream>
using std::cout;
using std::endl;
using std::cin;

void facto(void){
	
	cout << "Enter a number to recieve it's factorial: " << endl;
	int num;
	cin >> num;
	int cpy=num;
	int facto=1;
	
	while(num>1){
		facto*=num--;
	}
	
	cout << "Factorial of " << cpy << " is " << facto << endl;
}

int main(void){

	facto();	

return 0;

}


