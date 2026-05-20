class Solution {
public:
    int trailingZeroes(int n) {
        int p = 5;
        int v = 0; 
        while (n / p > 0) {
            v += (n / p); 
            p *= 5; 
        }
        return v;
    }
};