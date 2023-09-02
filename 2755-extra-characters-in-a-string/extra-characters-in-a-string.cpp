class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        vector<int> dp(n+1, INT_MAX); // dp[i]=minimum extra characters needed to cover s[0:i-1]
        dp[0]=0;

        for (int i=1; i <= n; i++) {
            for (string& w : dictionary) {
                int wLen = w.size();
                if (i >= wLen && s.substr(i-wLen, wLen) == w) {
                    dp[i] = min(dp[i], dp[i-wLen]);
                }
            }
            dp[i] = min(dp[i], dp[i-1]+1); // Add an extra character
        }

        return dp[n];
    }
};