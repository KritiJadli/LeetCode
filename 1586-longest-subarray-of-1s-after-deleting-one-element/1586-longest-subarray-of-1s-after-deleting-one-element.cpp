class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int maxLen=0;
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[j]==0){
                count++;
            }
            while(count>1){
                if(nums[i]==0){
                    count--;
                }
                i++;
            }
            maxLen=max(maxLen,j-i+1-1);
            j++;
        }
        return maxLen;
    }
};