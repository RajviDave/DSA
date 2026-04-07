#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    int maxsum= INT_MIN;
    
    for (int st=0;st<5;st++){
        int CS=0;
        for (int end=st;end <5;end++){
            CS=CS+arr[end];
            maxsum=max(maxsum,CS);
        }
    }

    cout<<maxsum<<endl;
    return 0;
}