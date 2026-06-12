class Solution {
public:
    int findMin(vector<int>& nums) {
        int minEle=INT_MAX;
        for(int i=0;i<nums.size();i++){
            minEle=min(minEle,nums[i]);
        }
        return minEle;
    }
};