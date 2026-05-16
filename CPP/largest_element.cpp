#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    arr = {4,3,6};

    int max_element = arr[0];
    int second_max_element=-1;
    for (int i=0;i<arr.size();i++){
        if(arr[i]>max_element){
            max_element=arr[i];
        }
    }

    for (int j=0;j<arr.size();j++){
        if(arr[j]>second_max_element && arr[j]!=max_element){
            second_max_element=arr[j];
        }
    }
    cout<<"The second maximum element is ="<<second_max_element;
    return 0;
}