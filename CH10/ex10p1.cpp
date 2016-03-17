#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <vector>
using std::vector;
#include <algorithm>

int main(void){
	
	vector<int> ivec;
	int temp;
	
	while(cin >> temp && temp != -1){
		ivec.push_back(temp);
	}
	
	constexpr int search = 42;
	
	auto result = count(ivec.begin(), ivec.end(), search);
	
	cout << search << " appeared " << result << " times in the vector." << endl;
	
	return 0;
	
}
