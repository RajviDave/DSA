#include<iostream>
using namespace std;


void number(int n){
    for(int a = 2; a <= n; a++){
        bool isPrime = true;

        for(int j = 2; j < a; j++){
            if(a % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout << a << endl;
        }
 }
}

int main(){

    int a;
    cout<<"Enter the number a=";
    cin>>a;

    number(a);

    return 0;
}