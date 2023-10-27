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
        if (result * sign > INT_MAX) {
            return INT_MAX;
        }
        if (result * sign < INT_MIN) {
            return INT_MIN;
        }
        i++;
    }
    return result * sign;
    }
};
