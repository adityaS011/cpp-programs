class Solution {
public:
    int uniquePaths(int m, int n) {
        //using combinations NCr, N is total number of steps r is n-1 or m-1
        int N= n+m-2;
        int r=m-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res= res*(N-r+i)/i;
        }
        return (int)res;
    }
};