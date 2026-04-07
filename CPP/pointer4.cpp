#include<iostream>
using namespace std;

void max(int *a, int* b){
    if(*a > *b){
        cout<<"First number is greater than second";
    }else{
        cout<<"Second number is greater than first";
    }
    return;
}

int main(){
    int a;
    int b;

    cout<<"Enter number a and b=";
    cin>>a>>b;

    int* ptr=&a;
    int* ptr1=&b;
    max(ptr,ptr1);
}