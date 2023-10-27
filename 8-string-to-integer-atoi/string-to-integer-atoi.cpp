class Solution {
public:
    int myAtoi(string str) {
    long result = 0;  
    int sign = 1; 
    int i = 0;
    while (str[i] == ' ') {
        i++;
    }
    if (str[i] == '+' || str[i] == '-') {
        sign = (str[i++] == '-') ? -1 : 1;
    }
    while (isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        if (result > INT_MAX) {
            return (sign == -1) ? INT_MIN : INT_MAX;
        }
        i++;
    }
    return result * sign;
    }
};
