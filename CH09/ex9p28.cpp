#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <forward_list>
using std::forward_list;
#include <string>
using std::string;

void modify(forward_list<string>&,string,string);
void print(forward_list<string>);

int main(void){
	
	string one;
	string two;
	forward_list<string> fString;
	string temp;
	
	while(cin >> temp && temp != "end")
		fString.push_front(temp);

	cin >> one >> two;

	modify(fString,one,two);
	print(fString);

return 0;
}
	

void modify(forward_list<string>& fString,string one,string two){

	forward_list<string>::iterator prev = fString.before_begin();
	forward_list<string>::iterator curr = fString.begin();

	while(curr != fString.end()){
		if(*curr == one){
			fString.insert_after(curr,two);		
			return;
		} 
	prev=curr++;
	}
	fString.insert_after(prev,two);
}

void print(forward_list<string> fString){
	
	for(auto ch : fString)
		cout << ch << " ";
	cout << endl;
}








