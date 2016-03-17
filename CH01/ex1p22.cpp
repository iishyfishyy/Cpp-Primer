#include <iostream>
#include "Sales_item.h"

int main(void){

	std::cout << "How many transactions would you like to read?" << std::endl;
	int n;
	std::cin >> n;

	Sales_item book[n];
	
	for(int i=0;i<n;i++){
		std::cin >> book[i];
	}
	
	Sales_item sum;
	for(int i=0;i<n;i++){
		sum+=book[i];
	}

	std::cout << "The sum of all transactions is " << sum << std::endl;
	
return 0;

}
