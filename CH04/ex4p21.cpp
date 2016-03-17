#include<iostream>
using std::cout;
using std::endl;
using std::cin;

#include<vector>
using std::vector;

int main(void){

	vector<int> elements;
	int num;
	
	while(cin >> num){
		elements.push_back(num);
	}
	
	for(auto &i:elements){
		i = (i%2==0) ? i : i*2;
	}
	for(const auto c:elements){
		cout << c << " ";
	} cout << endl;

return 0;
}
