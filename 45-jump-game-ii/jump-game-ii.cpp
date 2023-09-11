class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int max_d=0, curr=0,jump=0;
        for(int i=0;i<n-1;i++){
            max_d=max(max_d,nums[i]+i);
            if(i==curr){
                curr=max_d;
                jump++;
            }
        }
        return jump;
    }
};