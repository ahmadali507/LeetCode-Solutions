class Solution {
    public:
        long long int minimumRecolors(string blocks, int k) {
    
            ios::sync_with_stdio(false); 
            cin.tie(nullptr); cout.tie(nullptr); 
            int i = 0; 
            // int j = k; 
            long long int minimum = 0; 
            long long int res = INT_MAX; 
            for(int i=0; i<k; i++){
                if(blocks[i]=='W') minimum++; 
            }
            res = minimum; 
    
            for(int i=k; i<blocks.length(); i++){
                if(blocks[i-k]=='W') minimum--; 
                if(blocks[i]=='W') minimum++; 
                res = min(minimum,res);
            }
            return res; 
        }
    };