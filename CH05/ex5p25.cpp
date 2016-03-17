#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<stdexcept>

int main(void){
	
	int i,j;

    while(cin >> i >> j){
	try{		
		if(j==0)
			throw std::runtime_error("The value of second integer cannot be zero.");

		cout << i << " divided by " << j << " is " << static_cast<double>(i)/j << "." << endl;
	} catch (std::runtime_error error){
	
		cout << error.what() << "\nTry again? Enter y/n." << endl;
		
		char ch;
		cin >> ch;
		
		if(!cin || ch=='n'){
			return 0;
		}
	}	
    }
	return 0;
}

	
