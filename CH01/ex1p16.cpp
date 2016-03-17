#include <iostream>

int main(void){

	int sum, num;
	
	std::cout << "The sum of numbers: ";

	while(std::cin >> num){
	
		sum+=num;

	}

	std::cout << " is " << sum << std::endl;

return 0;

}

