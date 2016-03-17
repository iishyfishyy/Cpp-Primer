#include<iostream>
using std::endl;
using std::cout;
#include<string>
using std::string;

void f();
void f(int);
void f(int,int);
void f(double, double = 3.14);

int main(void){
	
	//f(2.56,42) -> AMBIGUOUS CALL
	f(42);
	f(42,0);
	f(2.56,3.14);
	
	return 0;
}

void f()
{
	cout << "called f()" << endl;
}

void f(int a)
{
	cout << "called f(int)" << endl;
}

void f(int a , int b)
{
	cout << "called f(int,int)" << endl;
}

void f(double a, double b)
{
	cout << "called f(double,double)" << endl;
}
