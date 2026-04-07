#include<iostream>
using namespace std;

void smallest(int *ptr,int n){
    int small=ptr[0];

    for(int i=0;i<n;i++){
        if(small>ptr[i]){
            small=ptr[i];
        }else{
            small=small;
        }
    }

    cout<<"The smallest number is="<<small<<endl;
    
    return;
}

void largest(int *ptr,int n){

    int large=ptr[0];
    for (int i=0;i<n;i++){
        if(large<ptr[i]){
            large=ptr[i];
        }else{
            large=large;
        }   
    }
    cout<<"largest number is ="<<large<<endl;
    return;
}

int main(){
    int n;
    cout<<"Enter number n=";
    cin>>n;

    int array[n];

    for (int i=0;i<n;i++){
        cin>>array[i];
    }

    smallest(array,n);
    largest(array,n);

    return 0;
}