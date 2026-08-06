class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
       
        int n=accounts.size();
        int m=accounts[0].size();
        for(int i=0;i<n;i++){
             int sum=0;
            for(int j=0;j<m;j++){
                sum+=accounts[i][j];
            }
            if(sum>maxWealth){
                maxWealth=sum;
            }
        }
        return maxWealth;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna