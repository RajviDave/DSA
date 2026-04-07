#include<iostream>
using namespace std;

void evenodd(int* ptr){
    if(*(ptr)%2==0){
        cout<<"The number is even";
    }else{
        cout<<"The number is odd";
    }

}

int main(){

    int n;
    cout<<"Enter the number n=";
    cin>>n;

    evenodd(&n);

    return 0;
}