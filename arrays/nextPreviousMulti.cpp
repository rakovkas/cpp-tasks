#include<iostream>
#include<array>

//Write C++ program to update every array element by multiplication of the next and previous values of given array of integers.

using namespace std;

void multiNextPrevious(int array[], int l){
    int newArray[l] = {};
    newArray[0] = array[1];
    newArray[l-1] = array[l-2];
    for (int i = 1; i<l-1; i++){
        newArray[i] = array[i-1]*array[i+1];
    }
    
    for(int i : newArray){
        cout<<i<<" ";
    }
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(int);

    multiNextPrevious(arr,length);
    

}