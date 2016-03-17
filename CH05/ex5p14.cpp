#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
#include<vector>
using std::vector;
#include<cctype>
//using std::ctype;
int main(void){	
	
	string current;
	string previous;
	int count;

	while(getline(cin,current)){
		for(auto i=current.begin();i!=current.end()-1;++i){
			while(!isspace(*i)){
				previous+=*i;
			}		
		}	
	}
	cout << previous << endl;

return 0;
}
