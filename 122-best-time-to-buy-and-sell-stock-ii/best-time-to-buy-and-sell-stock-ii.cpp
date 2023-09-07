class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m = prices[0];
        int res = 0;

        for(int i=1; i<n; i++){
            if(prices[i]<=m){
                m = prices[i];
            }
            else{
                res += prices[i] - m;
                m = prices[i];
            }
        }

        return res;
    }
};