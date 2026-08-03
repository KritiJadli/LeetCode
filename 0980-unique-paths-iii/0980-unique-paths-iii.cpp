class Solution {
public:
int m;
int n;
int nonObstacle;
int result;
vector<vector<int>>directions{{0,1},{0,-1},{1,0},{-1,0}};
    void backTrack(vector<vector<int>>& grid,int count,int i,int j){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==-1){
            return;
        }
        if(grid[i][j]==2){
            if(count==nonObstacle){
                result++;
              
            }
            return;
        }
         int temp=grid[i][j];
        grid[i][j]=-1;
        for(vector<int> &dir : directions){
            int new_i=i+dir[0];
           int  new_j=j+dir[1];

            backTrack(grid,count+1,new_i,new_j);
        }
        grid[i][j]=temp;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
         m=grid.size();
         n=grid[0].size();
         int start_x=0;
         int start_y=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    nonObstacle++;
                }
                if(grid[i][j]==1){
                    start_x=i;
                    start_y=j;
                }

            }
        }
        nonObstacle+=1;
        int count=0;
        backTrack(grid,count,start_x,start_y);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna