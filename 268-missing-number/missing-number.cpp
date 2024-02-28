class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=(nums.size()*(nums.size()+1))/2;
        for (auto num: nums){
            sum+=num;
        }
        return n-sum;
    }
};