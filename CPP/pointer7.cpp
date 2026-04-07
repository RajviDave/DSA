#include<iostream>
using namespace std;

void reverse(int (*array)[5]){
    int array1[5];

    for(int i = 0; i < 5; i++){
        array1[4 - i] = (*array)[i];
    }

    for(int i = 0; i < 5; i++){
        cout << array1[i] << endl;
    }
}

int main(){
    int array[5] = {1,2,3,4,5};
    reverse(&array);
}
