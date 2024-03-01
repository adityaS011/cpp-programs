class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<3;i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    ans.push_back(nums[j]);
                }
            }
        }
        nums= ans;
    }
};