#include<iostream>
using namespace std;

int main (){
	string  str, rev;
	cin>>str;
	int i = str.length()-1;
	for (i;i>= 0; i--){
		rev += str[i];
	}
	
	cout<<rev;
	
	return 0;
}