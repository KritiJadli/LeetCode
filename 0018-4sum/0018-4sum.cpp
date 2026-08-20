class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>> res;
      sort(nums.begin(),nums.end());
      if(nums.size()<4) return res;
      for(int i=0;i<nums.size()-3;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<nums.size()-2;j++){
            int right=nums.size()-1;
            int left=j+1;
            if(j>i+1 && nums[j]==nums[j-1] )continue;
            while(left<right){
                long long sum=(long long) nums[i]+nums[j]+nums[right]+nums[left];
                if(sum==target){
                    res.push_back({
                        nums[i],nums[j],nums[left],nums[right]});
                        int lo=nums[left];
                        int hi=nums[right];
                    left++;
                    right--;
                    while(left<right && nums[left]==lo)left++;
                    while(left<right && nums[right]==hi) right--;

                }
                else if(left<right && sum<target) left++;
                else if(left<right && sum>target) right--;
            }
        }
      }
      return res;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna