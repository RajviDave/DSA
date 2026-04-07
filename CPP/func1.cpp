#include<iostream>
using namespace std;

int nsum(int a){
    int b=1;
    for (int i=1; i<=a; i++){
        b=b+i;
    }
    cout<<b<<endl;
    return b;
}

int main(){
    int x;
    cout<<"Enter the number x:";
    cin>>x;

    nsum(x);
    return 0;
}