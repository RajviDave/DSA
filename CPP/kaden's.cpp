#include<vector>
#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n = 0;
   
    
    cin>>n;
    vector<int> arr(n);

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=INT_MIN;

    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int cs=0;
            cs=cs+arr[end];
            max1=max(max1,cs);

            if(cs<0){
                cs=0;
            }
        }
    }
    cout<<max1<<endl;

    return 0;
}