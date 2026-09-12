class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
         for(int i=0;i<=nums.size();i++){
            ans+=i;
        }

        return ans-sum;

        
    }
};