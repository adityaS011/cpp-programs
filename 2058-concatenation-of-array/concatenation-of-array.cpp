class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int counter=nums.size();
        int i=0;
        while(counter--){
            nums.push_back(nums[i++]);
        }
        return nums;
    }
};