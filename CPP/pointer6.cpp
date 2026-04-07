#include<iostream>
using namespace std;

int countelements(int* array,int n){

    int* a=array;
    int count=0;

    for (int i=0;i<=n;i++){
        if((a+n)>(a+i)){
            count++;
        }else{
            cout<<"The number is ="<<count<<endl;
        }
    }
    return count;
}

int main(){

    int n;
    cout<<"Enter n=";
    cin>>n;

    int array[n];

    for (int i=0;i<n;i++){
        cin>>array[i];
    }

    countelements(array,n);
    return 0;
}