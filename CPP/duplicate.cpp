#include<iostream>
#include<vector>

using namespace std;

int main(){
    int i=0;
    vector<int> vec = {1,1,2,2,3,3,3};
    for(int j=0; j<vec.size();j++){
        if(vec[i]!=vec[j]){
            vec[i+1]=vec[j];
            i++;
        }
    }
   cout<<"number of unique elements are "<<i+1<<endl;
}