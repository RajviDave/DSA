#include<iostream>
using namespace std;

int factorial(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}

int ncr(int a,int b){
    int n=factorial(a);
    int r=factorial(b);
    int c=factorial(a-b);

    int final=n/(r*c);
    cout<<final<<endl;
    
    return final;
}

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;

    int r;
    cout<<"Enter r";
    cin>>r;

    ncr(n,r);

    return 0;
}