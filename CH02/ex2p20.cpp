#include <iostream>

int main(void){
	
	int i = 42;

	int *p1 = &i;
	
	*p1 = *p1 * *p1;

	std::cout << *p1 << " " << i << std::endl;

return 0;

}
