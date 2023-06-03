#include<iostream>
using namespace std;

bool isPalindrom(string s){
	for (int i= 0; i< s.length();i++){
		for (int j = s.length()-1; i<=0; i--){
			if (i!=j){
				return false;
			}
		}
	}
	return true;
}


int main(){
	cout<<isPalindrom("anavolimilovana");
	
	return 0;
}

//check