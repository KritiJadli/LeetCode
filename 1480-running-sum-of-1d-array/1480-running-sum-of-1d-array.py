class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        ans=[]
        total=0
        for num in nums:
            total+=num
            ans.append(total)
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna