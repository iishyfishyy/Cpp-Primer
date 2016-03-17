#include <iostream>
using std::endl;
using std::cout;
#include <forward_list>
using std::forward_list;

int main(void){
	
	forward_list<int> fList = {0,1,2,3,4,5,6,7,8,9};
	forward_list<int>::iterator iter = fList.begin();
	forward_list<int>::iterator prev = fList.before_begin();
	
	while(iter!=fList.end()){
		if(*iter%2!=0){
			iter = fList.erase_after(prev);
		} else {
			prev = iter;
			++iter;
		}
	}
	
	for(auto even : fList)
		cout << even << " ";

	cout << endl;

return 0;
}
			
			
