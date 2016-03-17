#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;

int main(void){
	
	string s1;
	string rep;
	
	while(cin >> s1){
		if(rep==s1){
			cout << s1 << " repeated twice; program terminated." << endl;
			break;
		}		
		if(rep!=s1){		
			rep = s1;
			cout << "string did not repeat yet." << endl;
		} 		
	}

	
	

return 0;
}
		
