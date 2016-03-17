#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;

int main(void){

	string line;
	int aKnt, eKnt, iKnt, oKnt, uKnt, blnkKnt, tabKnt, nlKnt, ffKnt, fiKnt, flKnt, otherKnt;
	otherKnt=ffKnt=fiKnt=flKnt=blnkKnt=tabKnt=nlKnt=aKnt=eKnt=iKnt=oKnt=uKnt=0;

	while(getline(cin,line)){
		for(auto ch : line){
			if(ch=='a' || ch=='A'){
				++aKnt;
			} else if(ch=='e' || ch=='E'){
				++eKnt;
			} else if(ch=='i' || ch=='I'){
				++iKnt;
			} else if(ch=='o' || ch=='O'){
				++oKnt;
			} else if(ch=='u' || ch=='U'){
				++uKnt;
			} else if(ch==' '){
				++blnkKnt;	
			} else if(ch=='\t'){
				++tabKnt;
			} else if(ch=='\n'){
				++nlKnt;
			} else if(ch=='f' && &ch+1=='f'){
				++ffKnt;
			} //else if(ch=="fi"){
			//	++fiKnt;
			//} else if(ch=="fl"){
			//	++flKnt;
			//}
			 else {
				++otherKnt;
			}
		}
	}

	cout << "number of vowel a: " << aKnt << '\n';
	cout << "number of vowel e: " << eKnt << '\n';
	cout << "number of vowel i: " << iKnt << '\n';
	cout << "number of vowel o: " << oKnt << '\n';
	cout << "number of vowel u: " << uKnt << '\n';
	cout << "number of black characters: " << blnkKnt << '\n';
	cout << "number of tabs: " << tabKnt << '\n';
	cout << "number of new lines: " << nlKnt << '\n';
	cout << "number of 'ff's: " << ffKnt << '\n';
	cout << "number of 'fi's: " << fiKnt << '\n';
	cout << "number of 'fl's: " << flKnt << '\n';
	cout << "number of other characters: " << otherKnt << '\n';

return 0;
}
