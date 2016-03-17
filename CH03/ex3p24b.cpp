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

	decltype(seq.size()) size;

	for(auto beg=seq.begin(), end=seq.end()-1; beg<end; ++beg,--end){
		cout << *beg << " + " << *end << " = " << *beg+*end << endl	;
	}
return 0;

}
