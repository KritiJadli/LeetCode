class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int sum=0;
        int right=numbers.size()-1;
        while(left<right){
            sum=numbers[left]+numbers[right];
            if(sum<target){
                left++;
            }
            else if(sum>target){
                right--;
            }
            else if(sum==target){
                return {left+1,right+1};
            }

        }
        return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna