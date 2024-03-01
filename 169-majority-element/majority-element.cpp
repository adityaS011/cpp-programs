class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int count=0;
       int currMajor;
       for(int i=0;i<nums.size();i++){
           if(count==0){
               currMajor=nums[i];
               count++;
           }else if(currMajor==nums[i]){
               count++;
           }else{
               count--;
           }
       }
       return currMajor;
    }
};