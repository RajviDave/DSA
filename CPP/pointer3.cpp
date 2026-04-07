#include<iostream>
using namespace std;

void nsum(int* ptr, int* ptr1){
    int sum=*ptr+*ptr1;
    cout<<sum<<endl;

}

int main(){

    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;

    int* ptr=&a;
    int* ptr1=&b;

    nsum(ptr,ptr1);

    return 0;
}