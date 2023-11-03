class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int temp=1;
        for(auto i: target){
            while(temp<i){
                ans.push_back("Push");
                ans.push_back("Pop");
                temp++;
            }
            ans.push_back("Push");
            temp++;
        }
        return ans;
    }
};