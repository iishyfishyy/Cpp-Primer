#include <iostream>
#include "Sales_item.h"

int main(void){

	Sales_item book;
	int n;

	std::cout << "How many book sale transactions would you like to input?" << std::endl;
	std::cin >> n;

	std::cout << std::endl;	

	for(int i=0;i<n;i++){
		std::cin >> book;
		std::cout << book << std::endl << std::endl;
	}

	
return 0;

}
