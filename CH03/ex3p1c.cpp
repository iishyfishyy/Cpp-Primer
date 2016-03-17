#include <iostream>
#include "Sales_item.h"
using sitem = Sales_item;

using std::cin;
using std::cout;
using std::endl;

int main(void){
		
	sitem book1, book2;

	cin >> book1 >> book2;

	cout << "The sum of \n" << book1 << '\n' << "and" << '\n' << book2 << "\n" << "is\n" << book1+book2 << endl;	
	
return 0;

}
