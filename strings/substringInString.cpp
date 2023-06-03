#include<iostream>
using namespace std;

bool subString (string str1, string str2){
	bool sub = false;
	int br = 0;
	for (int i = 0; i<str1.length(); i++){
		if (str1[i] == str2[br]){
			br++;
		}
		else{
			br = 0;
		}	
		
		if (br == str2.length()){
				sub = true;
				break;
		}
	}
	return sub;
}

int main(){
	string str1,str2;
	getline(cin, str1);
	getline(cin, str2);
	
	cout<<subString (str1, str2);
	
	return 0;
}