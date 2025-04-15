#include<bits/stdc++.h>
using namespace std; 
class Solution {
    public:
        bool increasingTriplet(vector<int>& nums) {
            ios::sync_with_stdio(false); 
            cin.tie(nullptr); cout.tie(nullptr); 
            int first = INT_MAX; 
            int second = INT_MAX; 
            for(auto& x: nums){
                if(x<=first) first=x; 
                else if(x<=second) second=x; 
                else return true; 
            }
            return false; 
        }
    };