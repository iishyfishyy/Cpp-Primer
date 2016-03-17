	#include <iostream>

int main(void){
	
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;
	//	err: auto &h = 42;
	const auto &j = 42;
	//etc

	a=42; b=42; c=42; //d=42; e=42; g=42; 
	//a: equals 42
	//b: equals 42
	//c: equals 42
	//d: d is an int*. pointer cannot point to literal
	//e: e is a const int*. pointer cannot point to literal
	//g: can't bind non-const reference to a literal

	std::cout << a << b << c /* << d << e << g */ << std::endl;

return 0;

}
