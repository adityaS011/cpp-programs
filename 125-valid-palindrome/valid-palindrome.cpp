class Solution {
public:
    bool isPalindrome(string s) {
       string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                ans.push_back(tolower(s[i]));  
            }
        }
        string reversed=ans;
        reverse(reversed.begin(), reversed.end());
        return reversed == ans;
    }
};