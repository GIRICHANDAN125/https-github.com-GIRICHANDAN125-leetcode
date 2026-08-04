class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int l=0;
        int ans=0;

        for(int r=0;r<s.size();r++){
            while(st.count(s[r])){////  unordered_set<count means it will see in set vale is there are not if not insert and if repeted it will stop 
            st.erase(s[l]); /// if it is repeted in unorder set  it will earse the index 0 like sliding window it will leqave and enter one 
            l++;
            }
            st.insert(s[r]);
            ans= max(ans,r-l+1);
        }      
        return ans;
    }
};