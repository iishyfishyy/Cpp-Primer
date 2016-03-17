#include <iostream>
using std::endl;
using std::cout;
#include <vector>
using std::vector;

int main(void){
	
	vector<double> nums{94.2,12.2,69.69,78,14,5614.2};

	cout << nums.at(0) << endl;
	cout << nums[0] << endl;
	cout << nums.front() << endl;
	cout << *nums.begin() << endl;

	nums.erase(nums.begin());

	cout << nums.at(0) << endl;
	cout << nums[0] << endl;
	cout << nums.front() << endl;
	cout << *nums.begin() << endl;

return 0;
}
