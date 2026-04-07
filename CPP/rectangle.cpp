#include<iostream>
using namespace std;

int main(){
    int row;
    int column;

    cout<<"Enter number of rows and columns"<<endl;
    cin>>row;
    cin>>column;

    for(int i=1; i <= row; i++){
        for(int j=1; j <=column; j++){
            cout<<j;
        }
        cout<<endl;
    }

}