class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reach=nums[0], n=nums.size();
        for(int i=0;i<n;i++){
            if(max_reach<i){
                return false;
            }
            max_reach=max(max_reach,i+nums[i]);
        }
        return true;
    }
};