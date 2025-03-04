#include<bits/stdc++.h>
using namespace std; 


//////////////////////// EFFICIENT DYNAMIC PROGRAMMING SOLUTION /////////////////////////

class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            if (n == 0) return 0;  
            if (n == 1) return nums[0];  
            if (n == 2) return max(nums[0], nums[1]);  
         
             int a = nums[0], b = max(nums[0], nums[1]);
            int c = nums[1], d = max(nums[1], nums[2]);
            int amount1 = b, amount2 = d;
            for(int i=2;i<n-1; i++){
                amount1 = max(nums[i]+a,b); 
                a=b; 
                b=amount1; 
            }
            for(int i=3;i<n; i++){
                amount2=max(nums[i]+c,d); 
                c=d; 
                d=amount2; 
            }
            return max(amount1,amount2);
        }
    };


