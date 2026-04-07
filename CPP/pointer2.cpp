#include<iostream>
using namespace std;

void swap(int n,int p,int *ptr1){
    n=p;
    p=*ptr1;

    cout<<n<<endl<<p<<endl;
}

int main(){

    int a,b;
    cout<<"Enter a and b"<<endl;

    cin>>a>>b;
    int* ptr=&a;

    swap(a,b,ptr);
    return 0;
}