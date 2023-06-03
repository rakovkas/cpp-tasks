#include<iostream>
using namespace std;

int main(){
    int arr[3] = {1,2,3};

    int *pt = arr;

    for(int i = 0; i<3; i++){
        cout<<*(pt+i)<<endl;
    }
}