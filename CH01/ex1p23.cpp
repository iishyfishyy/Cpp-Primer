#include <iostream>
#include "Sales_item.h"

int main(void){

	Sales_item trans, curr_trans;

	if(std::cin >> curr_trans){
		int knt=1;
		while(std::cin >> trans){
			if(trans.isbn()==curr_trans.isbn()){
				knt++;	}
			else{
				std::cout << curr_trans << " occurs " << knt << " times." << std::endl;
				curr_trans=trans;
				knt=1;	}
		}
	
	std::cout << curr_trans << " occurs " << knt << " times." << std::endl;
	}

return 0;

}
