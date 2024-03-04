class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        if(prices.size() == 1) return 0;
        int min = prices[0], profit = 0, ans = 0;
        for(int i = 1; i<n; i++)
        {
            profit = prices[i] - min;
            ans = max(profit, ans);
            if(profit < 0) min = prices[i];   
        }
        return ans;
    }
};