class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2=0;
        int prev=0;
        for(int i=0;i<nums.size();i++){
           int take= nums[i]; if(i>1) take+=prev2;
           int not_take=0+ prev;
           int sum=max(take,not_take);
           prev2=prev;
           prev=sum;
        }
        return prev;
    }
};