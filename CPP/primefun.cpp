#include<iostream>
using namespace std;

void prime(int n){
    for (int i=2;i<=9;i++){
        if(n%i==0){
            cout<<"Number is not prime";
            break;
        }else{
            cout<<"Number is prime";
            break;
        }   
    }
}

int main(){
    int n;
    cout<<"Enter the number n=";
    cin>>n;

    prime(n);

    return 0;
}