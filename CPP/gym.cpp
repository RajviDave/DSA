#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(int E, vector<int>& A) {
    vector<int> v;

    for (int x : A) {
        v.push_back(x);
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());

    int cnt = 0;

    for (int x : v) {
        E -= x;
        cnt++;

        if (E <= 0)
            return cnt;
    }

    return -1;
}