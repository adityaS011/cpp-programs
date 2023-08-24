class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int len = s.length();
        for (int i = len / 2; i >= 1; i--)
        {
            if (len % i == 0)
            {
                int repeats = len / i;
                string sub = s.substr(0, i);
                string st;
                while (repeats-- > 0)
                    st += sub;
                if (st == s)
                    return true;
            }
        }
        return false;

    }
};