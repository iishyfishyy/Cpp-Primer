#include <iostream>

int main(void){
	
	int i=69;
	int *iPtr=nullptr;
	
	iPtr = &i;
	std::cout << *iPtr << std::endl;
	iPtr = &i + 1;
	std::cout << *iPtr << std::endl;	
	iPtr=&i;
	std::cout << *iPtr << std::endl;
	i = 99;
	std::cout << *iPtr << std::endl;

return 0;

}
