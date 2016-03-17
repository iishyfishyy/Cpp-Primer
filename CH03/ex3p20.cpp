#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main(void){
	
	int num;
	vector<int> vNum;

	while(cin >> num){
		vNum.push_back(num);
	}

	for(int i=0;i<vNum.size();i++){
		cout << vNum[i]+vNum[i+1] << " ";
		i++;
	}
	cout << endl;

	for(int j=0;j<vNum.size()-1;++j){
		cout << vNum[j] << " + " << vNum[vNum.size()-j] << " is " << vNum[j]+vNum[vNum.size()-(j)] << " " << endl;
	}
	cout << endl;

return 0;

}
