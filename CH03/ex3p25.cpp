#include<iostream>
using std::cin; using std::cout; using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

int main(void){
	
	vector<unsigned> scores(11);
	float grade;

	while(cin >> grade){
		if(grade<=100){
			++(*(scores.begin() + grade/10));		
		}	
	}
	
	for(auto tub : scores){
		cout << tub << " ";
	} cout << endl;

return 0;

}
