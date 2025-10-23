class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot_index=-1;//pivot= index which breaks the rule and needs to be swapped
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                pivot_index=i-1;
                break;
            }
        }
        if(pivot_index!=-1){
            int swap_index=-1;
            for(int j=n-1;j>=pivot_index+1;j--){
                if(nums[j]>nums[pivot_index]){
                swap_index=j;
                break;
                }
            }
            swap(nums[pivot_index],nums[swap_index]);
           
        }
         reverse(nums.begin()+pivot_index+1,nums.end());
    }
};