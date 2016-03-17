#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void){

	const char ca[]={'h','e','l','l','o'};
	const char *cp = ca;
	while(*cp){
		cout << *cp << endl;
		++cp;
	}

return 0;
}
