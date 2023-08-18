class Solution {
public:
//using dynamic programming 

    // Tabulation t=O(n),S = O(1)
    int fib(int n){
        if(n==0 || n==1) return n;
        int prev2=0, prev=1, cur=0;
        for(int i=2;i<=n;i++){
            cur=prev+prev2;
            prev2=prev;
            prev=cur;
        }
        return cur;
    }

    
    //--memoization with recursion t=O(n),S = O(n)
   /* int f(int n, vector<int>&dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]= f(n-1,dp)+f(n-2,dp);
    }
    int fib(int n) {
        
        vector<int> dp(n+1,-1);
        return f(n,dp);
    } */
};
