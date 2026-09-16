class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                swap(nums[l],nums[i]);/// here we checking first using two pointer likewe will swap for 0 to begin and afetr we will do same for value 2 we will do loop and swap here also 2 at end and after doing these two automatic 1 will come middle 
                l++;
            }
        }

        int r=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==2){
                swap(nums[r],nums[i]);
                r--;
            }
        }
   

    }
};