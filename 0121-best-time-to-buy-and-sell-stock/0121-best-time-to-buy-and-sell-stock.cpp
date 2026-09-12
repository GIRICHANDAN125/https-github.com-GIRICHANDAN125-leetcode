class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        int profit=0;
        int maxp=INT_MIN;
        for(int i=0;i<prices.size();i++){
           minp=min(prices[i],minp);
           profit=max(profit,prices[i]-minp);
        }
        return profit;

        
    }
};