class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
       richest=0
       for i in accounts:
        richest=max(richest,sum(i))
       return richest 

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna