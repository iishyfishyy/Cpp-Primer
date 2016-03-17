#include <iostream>

int main(void){

	std::cout << "Insert two integers";
	std::cout << std::endl;
	
	int num1=0, num2=0;
		
	std::cin >> num1;
	std::cin >> num2;

	std::cout << "The product of ";
	std::cout << num1;
	std::cout << " and ";
	std::cout << num2;
	std::cout << " is ";
	std::cout << num1*num2;
	std::cout << std::endl;

return 0;

}

