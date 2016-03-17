#include<iostream>
using std::cin; using std::cout; using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

int main(void){

	vector<int> seq;
	int in;

	while(cin >> in){
		seq.push_back(in);
	}

	for(auto i = seq.begin(); i!=seq.end(); i++){
		cout << *i << " + " << *(i+1) << " = " << *i+*(i+1) << endl;
		i++;
	}

return 0;

}
