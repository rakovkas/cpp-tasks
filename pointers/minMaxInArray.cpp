#include<iostream>
using namespace std;

void findMinMax( int * ptr, int size, int *min, int* max){
    *min = *ptr;
    *max = *ptr;

    for (int i = 0; i< size; i++){
        if(*(ptr+i)>*max){
            *max = *(ptr+i);
        }
        else if(*(ptr+i)<*min){
            *min = *(ptr+i);
        }
    }
}

int main(){
    int array[5] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int min, max;
    findMinMax(&array, size, &min, &max);  //check this

    cout<<min<<endl<<max;
}