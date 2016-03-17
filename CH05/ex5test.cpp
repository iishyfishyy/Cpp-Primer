#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void){
	unsigned even=0, odd=0;
	int n;
	cin >> n;
	int digit=n%10;

	switch (digit){
		case 1,3,5,7,9: odd++; break;
		case 2,4,6,8,10: even++; break;
	}

	cout << odd << even << endl;

return 0;
}
