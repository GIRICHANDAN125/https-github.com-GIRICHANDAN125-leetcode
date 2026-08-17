class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());


        for(int i=0;i<nums.size()-2;i++){/// here outer loop we will use for   to caluclate one number example index 0 here -4 after that it will itereate after meting inner loop condition and here we taken -2 bcse to calculate only 3 or we can use i <= size - 3 for take 3 nums 0 , 1 , 2 here
        
        if(i>0 && nums[i]==nums[i-1]){
            continue; // here we will see dupicate example -1 == -1 means we will skip this and continue here  and i is 2 index and i is 1 index here for -4-1-1 0 1 2 
        }
        int l=i+1;
        int r=nums.size()-1;
        while(l<r){ /// here inner loop to calculate to  take the remaining two number like index 1 and last index  and if after doing sum if it is not eql means it will l++ and r-- and also here will see duplicate  also 

        int sum=nums[i]+nums[l]+nums[r];
        if(sum==0){
            ans.push_back({nums[i],nums[l],nums[r]});
            while(l<r && nums[l]==nums[l+1]){
                l++;     // here we will see duplicate if -1 == -1 means direct we will l++ here to avoid dupilcate 
            }
             while(l<r && nums[r]==nums[r-1]){
                r--;     // here we will see duplicate if -1 == -1 means direct we will r-- here to avoid dupilcate 
            } 
            l++;
            r--;           
        }
        else if(sum<0){
            l++; //// here if sum is -ve means left will move here
        }
        else{
            r--; /// here if +ve means it will move here 
        }
        }
        }
        return ans;
    }
     
};