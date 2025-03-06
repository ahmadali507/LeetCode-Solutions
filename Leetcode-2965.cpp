#include<bits/stdc++.h>
using namespace std; 

class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            ios::sync_with_stdio(false); 
            cin.tie(nullptr); cout.tie(nullptr); 
    
            unordered_map<int,int>mp; 
            vector<int> res(2); 
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[i].size();j++){
                    mp[grid[i][j]]++;
                }
            }
    
            for(auto num=1; num<=grid.size()*grid.size(); num++){
                if(mp[num]==2) res[0]=num; 
                if(mp[num]==0) res[1]=num; 
            }
    
            return res; 
        }
    };