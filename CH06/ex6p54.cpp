#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<vector>
using std::vector;

int firstfunc(int,int);
using type1 = decltype(firstfunc);
//typedef decltype(firstfunc) type1;

int add(int,int);
int sub(int,int);
int mult(int,int);
int divi(int,int);

vector<type1*> vecOne{add,sub,mult,divi};

int main(void){
		
		for(vector<type1*>::iterator i=vecOne.begin();i!=vecOne.end();++i){
			cout << (*i)(2,4) << endl;
		}
		
return 0;
}

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return (a > b) ? a+b : b-a;
}

int mult(int a, int b)
{
	return a*b;
}

int divi(int a, int b)
{
	return (a > b) ? a/b : b/a;
}
