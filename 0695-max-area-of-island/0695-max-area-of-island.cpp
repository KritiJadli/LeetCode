class Solution {
public: 
int dfs(vector<vector<int>>& grid,int row,int col){
    if(row<0 || col<0 || row>=grid.size() || col>=grid[0].size()|| grid[row][col]==0){
        return 0;
    }
    grid[row][col]= 0;
    return 1
     + dfs(grid,row+1,col)
     + dfs(grid,row-1,col)
     + dfs(grid,row,col+1)
     + dfs(grid,row,col-1); 
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    int area=dfs(grid,i,j);
                    maxArea=max(area,maxArea);
                }
            
            }
        }
        return maxArea;

    }
};