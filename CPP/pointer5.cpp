#include<iostream>
using namespace std;

void arr(int array[], int n){
    for(int i = 0; i < n; i++){
        cout << *(array + i) << " ";
    }
}

int main(){
    int n;
    cout << "Enter the number n = ";
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    arr(array, n);
    return 0;
}
