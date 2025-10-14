class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int total=0;
        for(int i:nums){
            total+=i;
        }
        for(int i=0;i<nums.size();i++){
            int rightsum=total-nums[i]-leftsum;
            if(rightsum==leftsum){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;

        
    }
};