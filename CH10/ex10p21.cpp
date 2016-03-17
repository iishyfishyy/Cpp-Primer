#include <iostream>
using std::endl;
using std::cout;
#include <algorithm>

int main(void){
	
	int num = 100;
	
	auto f = [&num] () -> bool {
		if (num == 0){
			return false;
		} else{
			while(num!=0){
				--num;
			}
			return true;
		}
	};
	
	f();
	
	cout << num << endl;
	
	return 0;
	
}
