#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(void){
		
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};

	for(auto i : v1){
		cout << i;
	}cout << endl;

	for(auto i : v2){
		cout << i << endl;
	}cout << endl;

	for(auto it = v3.begin(); it!=v3.end()-1; ++it){
		cout << *it << endl;
	}

	for(auto it=v4.begin();it!=v4.end()-1;++it){
		cout << *it << endl;
	}
	for(auto it=v5.begin();it!=v5.end()-1;++it){
		cout << *it << endl;
	}
	for(auto it=v6.begin();it!=v6.end()-1;++it){
		cout << *it << endl;
	}
	for(auto it=v7.begin();it!=v7.end()-1;++it){
		cout << *it << endl;
	}

return 0;
}
