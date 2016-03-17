#include <iostream>
using std::cout; using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

int main(void){

	vector<int> vInt{1,2,3,4,5,6,7,8,9,10};	

	for(auto it = vInt.begin(); it != vInt.end(); it++){
		*it *=2;
	}
	for(auto p : vInt){
		cout << p << " ";
	} cout << endl;

return 0;

}
		
