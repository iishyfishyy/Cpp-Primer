#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main(void){
	
	int sum=0, val=0;
	
	while(++val,val<=10)
		sum+=val;

	cout << "sum of 1 to 10 inclusive is " << sum << endl;

return 0;
}	
	
