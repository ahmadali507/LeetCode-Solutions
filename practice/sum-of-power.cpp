///////////// if a number n is made of sum of powers of k /////////////// 

class Solution {
  public: 
  bool isSumOfPower(int n, int k){
    if(n<1) return false; 
    if(n==1) return true; 
    return n%k==0 && isSumOfPower(n/k, k); 
  }
}; 