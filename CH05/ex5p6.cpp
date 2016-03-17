#include<iostream>
using std::endl;
using std::cout;
using std::cin;

#include<string>
using std::string;

#include<vector>
using std::vector;

int main(void){
		
	string grades[]={"A","B","C","D","F"};
	int n(0);

	while(cin >> n){
		string letter = (n<50) ? grades[4] : (n>=50 && n<=60) ? grades[3] : (n>60 && n<=70) ? grades[2] : (n>70 && n<=80) ? grades[1] : (n>80 && n<=90) ? grades[0] : "A+";
		cout << letter << endl;
	}
	
return 0;
}


