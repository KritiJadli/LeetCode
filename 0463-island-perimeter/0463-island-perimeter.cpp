class Solution {
public:
void dfs(vector<vector<int>>& grid,int row,int col,int &perm){
    grid[row][col]=-1;
    int dr[4]={1,-1,0,0};
    int dc[4]={0,0,1,-1};
    for(int i=0;i<4;i++){
        int nr=row+dr[i];
        int nc=col+dc[i];
        if(nr<0 || nc<0 || nr>=grid.size() || nc>=grid[0].size())perm++;
        else if(grid[nr][nc]==0) perm++;
        else if(grid[nr][nc]==1) dfs(grid,nr,nc,perm);
    }

    
}
    int islandPerimeter(vector<vector<int>>& grid) {
        int perm=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,perm);
                    return perm;
                }
            }
        }
        return perm;

        
    }
};