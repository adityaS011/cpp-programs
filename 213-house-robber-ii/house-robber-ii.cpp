class Solution {
public:
 int robber(vector<int>& num){
        int prev2=0;
        int prev=0;
        for(int i=0;i<num.size();i++){
           int take= num[i]; if(i>1) take+=prev2;
           int not_take=0+ prev;
           int sum=max(take,not_take);
           prev2=prev;
           prev=sum;
        }
        return prev;
 }
    int rob(vector<int>& nums) {
        vector <int> temp1,temp2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=nums.size()-1) temp2.push_back(nums[i]);
        }
        return max(robber(temp1),robber(temp2));
    }
};