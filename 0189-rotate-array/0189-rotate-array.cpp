class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int d= nums.size();
        k%=d;
        reverse(nums.begin(),nums.end());  //// sort array overall  exam 1 2 3 4  5 6 7= 7654321
        reverse(nums.begin(),nums.begin()+k);  /// sort first three elements 567
        reverse(nums.begin()+k,nums.end());   /// sort last 4elements 1234 and there fore 5671234 o/p
    }
};
