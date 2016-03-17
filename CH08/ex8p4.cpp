#include<iostream>
using std::endl;
using std::cin;
using std::cout;
#include<fstream>
using std::ifstream;
using std::ofstream;
#include<string>
using std::string;
#include<vector>
using std::vector;

void openToRead();

int main(void){

	openToRead();

return 0;
}

void openToRead(){
	vector<string> sVec;
	ifstream input("../cpp/strings.txt");
	
	if(input){
		string temp;
		while(getline(input,temp)){
			sVec.push_back(temp);	
		}
	}
	
	for(const auto& str : sVec){
		cout << str << endl;
	} 	
}




