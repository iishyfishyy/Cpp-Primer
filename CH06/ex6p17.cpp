#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<string>
using std::string;
#include<cctype>

void checkupper(string*);
void setLower(char&);

int main(void){
	
	string input;
	cin >> input;
	checkupper(&input);
	cout << input;
	cout << endl;

	return 0;
}

void checkupper(string *temp){

	for(auto& ch:*temp){
		if(isupper(ch)){
			setLower(ch);
		}
	}
}

void setLower(char &c){
	
	c = tolower(c);
	
}
