#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int>vec={1,2,3};
    
    cout<<vec.capacity()<<endl;

    vec.push_back(20);
    vec.push_back(25);
    vec.push_back(30);

    cout<<vec.capacity()<<endl;
    return 0;
}
