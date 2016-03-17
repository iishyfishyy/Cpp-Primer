#include<iostream>
using std::cout;
using std::endl;
using std::cin;

void swap(int *a, int *b);

int main(void){

	int x=0,y=0;

	cout << endl;
	cout << "Enter two values to swap: ";
	cin >> x >> y;
	
	cout << "Swapped values of " << x << " and " << y << " are: ";
	swap(&x, &y);
	cout << x << " and " << y << endl << endl;

	return 0;
}

void swap(int *a, int *b){
	
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

	
