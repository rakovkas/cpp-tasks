#include<iostream>
#include<array>

//Display sum and average of array elements.

using namespace std;

int main(){
    int array [5] = {1,2,3,4,5};
    int length = sizeof(array)/sizeof(int);

    int sum=0;
    for (int i = 0; i<length; i++){
        sum += array[i];
    }
    
    cout<<"sum of elements in array: "<<sum<<endl;
    cout<<"avarage of elements in array: "<<sum/length;
}