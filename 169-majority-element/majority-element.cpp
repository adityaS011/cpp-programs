class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,res=0;
        int ans=nums[0];
        sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==nums[i+1]){
                    count++;
                }
                if(res<count){ 
                    res=max(res,count);
                    ans=nums[i];
                }
                else if(nums[i]!=nums[i+1]){
                    count=0;
                }
            }
        return ans;
    }
};