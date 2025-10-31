class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int>st;
        int expSum=0;
        int actSum=0;
        int n=grid.size();
        int a;
        //repeated value
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actSum+=grid[i][j];
                if(st.find(grid[i][j])!=st.end()){
                     a= grid[i][j];
                     ans.push_back(a);
                }
                st.insert(grid[i][j]);
                
            }
            
           
        }
         //missing;
            expSum=(n*n*(n*n+1))/2;
            int b=(expSum-actSum)+a;
            ans.push_back(b);
         return ans;


    }
};