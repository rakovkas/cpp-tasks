#include<iostream>

using namespace std;

void replaceEl (int arr[], int l){
    int temp;
    int j = l - 1;
    for (int i = 0; i < j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(int);

    replaceEl(arr, length);

    for(int i = 0; i < length; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

