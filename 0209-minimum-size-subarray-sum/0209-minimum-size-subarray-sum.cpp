class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minL=INT_MAX;
        long long sum=0;
        int i=0;
        int j=0;
        while(j<nums.size()){
            sum+=nums[j];
           while(sum>=target){
                minL=min(minL,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
           
        }
        return (minL==INT_MAX)? 0: minL;
    }
};