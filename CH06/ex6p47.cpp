#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<vector>
using std::vector;
using iter=vector<int>::iterator;
using std::cerr;

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
	#ifndef NDEBUG
		cerr << __FILE__ << endl << __func__ << endl << __LINE__ << endl << 
		__TIME__ << endl << __DATE__ << endl;
	#endif
	if (beg!=end){
		cout << *beg << " ";
		print(beg+1,end);	
	}
}

