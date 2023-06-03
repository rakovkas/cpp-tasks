#include<iostream>
using namespace std;

void reverseString (char *ar){
    char *start = ar;
    char *end = ar;
    char temp;

    while (*end != '\n'){
        end++;
    }
    end--;

    while (start<end)


}

int main(){
    char str [] = "Hello";
    
    reverseString(&str);


}