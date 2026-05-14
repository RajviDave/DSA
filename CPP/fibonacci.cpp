#include<iostream>
#include<vector>
using namespace std;

class Solution {
  private:
    int rec(vector<int> &h, int i) { // 2^n
        // return min energy needed for stair 0 -> i
        if (i==0) { return 0; }
        if (i==1) { return abs(h[1] - h[0]); }
        
        // recursive call
        // to reach ith stair. 1 step back...
        int val1 = rec(h, i-1) + abs(h[i] - h[i-1]);
        int val2 = rec(h, i-2) + abs(h[i] - h[i-2]);
        return min(val1, val2);
    }
    int helper(vector<int> &h, int i, vector<int> &memo) {
        if (memo[i] != -1) { return memo[i]; }
        int val1 = helper(h, i-1, memo) + abs(h[i] - h[i-1]);
        int val2 = helper(h, i-2, memo) + abs(h[i] - h[i-2]);
        return (memo[i] = min(val1, val2));
    }
    int memoized(vector<int> &h) {
        int n = h.size();
        vector<int> memo(n, -1); // i: 0 -> (n-1)
        memo[0] = 0, memo[1] = abs(h[1] - h[0]);
        return helper(h, n-1, memo);
    }
    int tabulation(vector<int> &h) {
        int n = h.size();
        vector<int> dp(n, -1); // i: 0 -> (n-1)
        dp[0] = 0, dp[1] = abs(h[1] - h[0]);
        for(int i = 2; i < n; i++) {
            int val1 = dp[i-1] + abs(h[i] - h[i-1]);
            int val2 = dp[i-2] + abs(h[i] - h[i-2]);
            dp[i] = min(val1, val2);
        }
        return dp[n-1];
    }
    int space_optimised(vector<int> &h) { // TC: O(n), SC: O(1)
        int n = h.size();
        int prev2 = 0, prev = abs(h[1] - h[0]);
        for(int i = 2; i < n; i++) {
            int val1 = prev + abs(h[i] - h[i-1]);
            int val2 = prev2 + abs(h[i] - h[i-2]);
            int curr = min(val1, val2);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
  public:
    int minCost(vector<int>& height) {
        // Code here
        if (height.size() < 2) { return 0; }
        return space_optimised(height);
    }
};