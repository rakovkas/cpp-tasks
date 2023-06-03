#include<iostream>
#include<array>

//Write C++ program to count the number of occurrences of specific element in an array. 

using namespace std;

int main(){
    int array[5] = {1,2,3,2,5};
    int element = 2, occ = 0;

    int length = sizeof(array)/sizeof(int);

    for (int i = 0; i<length; i++){
         if (array[i]== element){
            occ += 1;
         }
    }

    cout<<occ;
}