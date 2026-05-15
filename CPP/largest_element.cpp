#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    arr = {6,7,2,1,4};

    int max_element = arr[0];
    for (int i=0;i<arr.size();i++){
        if(arr[i]>max_element){
            max_element=arr[i];
        }
    }
    cout<<"The maximum element is ="<<max_element;
    return 0;
}