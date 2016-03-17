#include <iostream>

int main(void){
	
	int sum=0, num=50;

	while(num<=100){
	
		sum+=num;
		num++;
	
	}

	std::cout << "The sum from 50 to 100 inclusive is " << sum << std::endl;

return 0;

}
