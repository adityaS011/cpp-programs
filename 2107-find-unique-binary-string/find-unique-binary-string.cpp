class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string res;
        for(auto i=0;i<nums.size();i++){
            char curr=nums[i][i];
            res+= (curr == '0' ? '1' : '0');
        }
        return res;
    }
};