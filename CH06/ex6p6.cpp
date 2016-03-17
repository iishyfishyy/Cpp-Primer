#include<iostream>
using std::endl;
using std::cout;
using std::cin;

int fcount(){
	
	static int x=0;
	return ++x;

}
	

int main(void){
	
	for(size_t i=0;i!=10;++i){
		cout << fcount() << endl;
	}

	return 0;
}
