#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<vector>
using std::vector;
#include<string>
using std::string;
#include<cctype>

int main(void){

	string input;
	vector<string> para;
	
	while(getline(cin,input)){
		para.push_back(input);
	}
	
	for(auto ite = para.begin(); ite != para.end() && !ite->empty(); ite++){
		cout << *ite << endl;
	}

	for(auto ite = para.begin(); ite != para.end() && !ite->empty(); ite++){
		for(auto &ch : *ite){
				ch = toupper(ch);
		}
	}

	for(auto ite = para.begin(); ite != para.end() && !ite->empty(); ite++){
		cout << *ite << endl;
	}
		
return 0;

}
