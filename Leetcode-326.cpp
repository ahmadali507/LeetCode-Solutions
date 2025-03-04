
class Solution {
    public:
        bool isPowerOfThree(int n) {
            // ios::sync_with_stdio(false); 
            // cin.tie(nullptr); 
            int powerofThree = 1; 
            if(n==1) return true; 
            while(powerofThree<n){
                powerofThree*=3; 
                if(powerofThree==n) return true; 
            }
            return false; 
        }
    };


////////// this is can also be done via recursion ///////// 
