/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getModeCount(TreeNode* root, unordered_map<int, int> &map) {
        if(root == NULL) return 0;
        map[root->val]++;
        return max(map[root->val],max(getModeCount(root->left, map),getModeCount(root->right, map)));
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        unordered_map<int, int> map;
        int modeCount = getModeCount(root, map);
        for(pair<int,int> p : map) {
            if(p.second == modeCount) ans.push_back(p.first);
        } 
        return ans;
    }
};