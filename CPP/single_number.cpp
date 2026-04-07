#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ans;
    vector<int> vec;

    for(int i: vec){
        ans=ans^i;
    }
    return ans;
}