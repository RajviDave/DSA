#include<iostream>
#include<vector>
using namespace std;

int min(int a,int b){
    if(a>b){
        cout<<"q is smalles";
    }else{
        cout<<"p is smallest";
    }
   }

int main(){
    int p;
    cout<<"Enter value of p:";
    cin>>p;

    int q;
    cout<<"Enter value of q:";
    cin>>q;

    min(p,q);

    return 0;
}