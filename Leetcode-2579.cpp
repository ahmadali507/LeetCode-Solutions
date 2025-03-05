
// 2579. Count Total Number of Colored Cells
class Solution {
    public:
        long long coloredCells(long long int n) {
            return ((n*n) + ((n-1)*(n-1))); 
        }
};
