////////////////////////// nth-TRIBONACCI NUMBERS ////////////////////////////
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

//////////// TOP-DOWN APPROACH -- MEMOIZED VERSION ///////////

class Solution
{
public:
    int helper(vi &dp, int n)
    {
        if (n == 0)
        {
            return dp[0];
        }
        if (dp[n] != -1)
            return dp[n];
        dp[n] = helper(dp, n - 1) + helper(dp, n - 2) + helper(dp, n - 3);
        return dp[n];
    }

    int tribonacci_memoized(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        vi dp(n + 1, -1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        return helper(dp, n);
    }

    ///////////////////////////// BOTTOM_UP APPROACH  TABULATION /////////////////////////

    int tribonacci_tabulated(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        int prev1 = 01, prev2 = 1, prev3 = 0;
        int res = 0;
        for (int i = 3; i <= n; i++)
        {
            res = prev1 + prev2 + prev3;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = res;
        }
        return res;
    }
};