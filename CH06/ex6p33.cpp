#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<vector>
using std::vector;
using iter=vector<int>::iterator;

void print(iter,iter);

int main(void)
{	
	vector<int> ints;
	int inp;

	while(cin >> inp)
		ints.push_back(inp);

	print(ints.begin(),ints.end());
	cout << endl;
	return 0;
}

void print(iter beg,iter end)
{
	if (beg!=end){
		cout << *beg << " ";
		print(beg+1,end);	
	}
}
