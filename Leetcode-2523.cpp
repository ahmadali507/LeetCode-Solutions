#include<bits/stdc++.h>
using namespace std; 
class Solution {
    public:
        vector<int> Sieve_Of_Eratosthenes(int n, int start) {
            vector<bool> res(n+1, true);
            vector<int> result; 
            res[0] = res[1] = false;
            for (int i = 2; i * i <= n; i++) {
                if (res[i]) {
                    for (int j = i * i; j <= n; j += i) {
                        res[j] = false;
                    }
                }
            }
            for(auto i = 0; i<res.size();i++){
                if(res[i] && i >= start){
                    result.push_back(i); 
                }
            }
            return result;
        }
    
        vector<int> closestPrimes(int left, int right) {
            ios::sync_with_stdio(false); 
            cin.tie(nullptr); cout.tie(nullptr); 
    
            vector<int> vec = Sieve_Of_Eratosthenes(right, left);
            vector<int> res(2,-1);
            int minDiff = INT_MAX;
            for(int i=1;i<vec.size(); i++){
                int temp = vec[i]-vec[i-1]; 
                if(temp<minDiff){
                    res[0] = vec[i-1]; 
                    res[1] = vec[i]; 
                    minDiff = temp; 
                }
    
            }
    
            
            return res; 
        }
    };