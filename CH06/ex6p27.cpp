#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<string>
using std::string;
#include<initializer_list>
using std::initializer_list;

int sum(initializer_list<int>);

int main(void){

	int a,b,c,d,e,f,g,h;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	cout << "sum of entered ints: " << sum({a,b,c,d,e,f,g,h}) << endl;

	return 0;
}

int sum(initializer_list<int> list){
	int sum=0;	
	for(auto beg=list.begin(); beg!=list.end(); ++beg){
		sum+=*beg;
	}

	return sum;
}
	
