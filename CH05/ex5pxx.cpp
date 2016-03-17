#include<iostream>
using std::endl;
using std::cout;
using std::cin;

#include<string>
using std::string;

#include<vector>
using std::vector;

int main(void){
		
	vector<int> score;
	string grades[]={"A","B","C","D","F"};
	int num;

	while(cin >> num && num>=0 && num<=100){
		score.push_back(num);
	}		

	for(auto n : score){
		if(n<50){
			cout << n << " -> " << grades[4] << " -> fail." << endl;
		} else if (n>=50 && n<=60){
			cout << n << " -> " << grades[3] << " -> close pass." << endl;
		} else if (n>60 && n<=70){
			cout << n << " -> " << grades[2] << " -> pass." << endl;
		} else if (n>70 && n<=80){
			cout << n << " -> " << grades[1] << " -> good pass." << endl;
		} else if (n>80 && n<=90){
			cout << n << " -> " << grades[0] << " -> high pass." << endl;
		} else {
			cout << n << " -> " << "A+" << " -> extraordinary!" << endl;
		}
	}

	for(auto n : score){
		cout << n << " -> " << << endl;
	}
	
return 0;
}


