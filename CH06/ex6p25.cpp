#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<string>
using std::string;

int main(int argc, char *argv[]){
	string str;
	for(int i=0;i!=argc;++i){
		str+=argv[i];
		str+=" ";
	}
	cout << str << endl;
	return 0;
}
