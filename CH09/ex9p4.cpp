#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <vector>
using std::vector;

bool verifyInt(vector<int>::iterator,vector<int>::iterator,int);

int main(void){

	vector<int> ivec{1,2,3,4,5,6,7,8,9};
	vector<int>::iterator begin = ivec.begin();
	vector<int>::iterator end = ivec.end();
	int check;
	cin >> check;
	
	if (verifyInt(begin,end,check)){
		cout << "true, " << check << " found." << endl;
	} else {
		cout << "false, " << check << " not found." << endl;
	}
	
return 0;
}


bool verifyInt(vector<int>::iterator begin,vector<int>::iterator end,int check){

	while(begin!=end){
		if (*begin == check){		
			return true;
		}
		++begin;
	}
	
return false;
}
			
