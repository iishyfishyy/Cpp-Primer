#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<vector>
using std::vector;


int main(void){
		
	vector<int> smaller;
	vector<int> bigger;
	int c=0,d=0;

	cout << "Enter values for smaller vector, terminate reading by '0'." << endl;
	do{
		cin >> c;
		smaller.push_back(c);
	} while(c);

	cout << "Enter values for bigger vector, terminate reading by '0'." << endl;
	do{
		cin >> d;
		bigger.push_back(d);
	} while(d);

	for(auto i=smaller.begin(), j=bigger.begin(); i!=smaller.end()-1; ++i,++j){
		if(*i==*j){
			;
		} else {
			cout << "False." << endl;
			return 0;
		}
	}
	
	cout << "True." << endl;

	return 0;

}
