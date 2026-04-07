#include<iostream>
using namespace std;

int sunofn(int a){

    int x=0;
    while(a>=1){
        x=(a%10)+x;
        a=a/10;
    }
    cout<<x<<endl;
    return x;
}

int main(){
    int a;
    cout<<"Enter a number";
    cin>>a;

    sunofn(a);
return 0;
}