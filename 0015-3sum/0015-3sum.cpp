class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            int target=-nums[i];
            if(i>0 && nums[i]==nums[i-1])continue;
            while(left<right){
                int sum=nums[left]+nums[right];
                if(sum==target){
                    res.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1] )left++;
                    while(left<right && nums[right]==nums[right+1])right--;
                }
                else if(sum>target){
                    right--;
                }
                else if(sum<target){
                    left++;
                }
            }


        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna