class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            int ans=target -nums[i]; // exam 9-2=7 and store 2 in hash and find to answer again  //2 itera 9-7=2 and check hash if found then return index 
            if(mp.find(ans)!=mp.end()){
                return {mp[ans],i};//// mp.[ans ] means 2->0 index 0 and current index i which is 7-> 1 ans{0,1} 
            }
             mp[nums[i]]=i;
        }    
        return {}; 
    }
};