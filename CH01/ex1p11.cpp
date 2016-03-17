#include <iostream>

int main(void){

	int num1, num2;
	int range;

	std::cin >> num1 >> num2;

	std::cout << "You entered " << num1 << " and " << num2 << std::endl;

	range = num2-num1;

	while(range>=0){

		std::cout << range << std::endl;
		range--;

	}

return 0;

} 
