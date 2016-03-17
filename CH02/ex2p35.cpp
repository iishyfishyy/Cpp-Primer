#include <iostream>
	
int main(void){
	
	const int i = 42;
	
	auto j=i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;

	// j is type int
	// k is const reference to int i
	// p is an int pointer to i 
	// j2 is a const int
	// k2 is a const reference to const int i

return 0;

} 
