#include <iostream>
#include "Sales_item.h"

int main(void){

	Sales_item book[2];
	
	std::cin >> book[0];
	std::cin >> book[1];

	std::cout << "The sum of \n" << book[0] << "\nand\n" << book[1] << "\nis\t" << book[0]+book[1] << std::endl;
	
return 0;

}
