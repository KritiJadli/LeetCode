class Solution {
public:
    vector<pair<int,int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    int m,n;
    bool find(vector<vector<char>>& board,string& word,int i,int j,int indx) {
        if(indx==word.size()){
            return true;
        }
        if(i<0||j<0|| i>=board.size() || j>=board[0].size() || board[i][j]!=word[indx])return false;
        int temp=board[i][j];
        board[i][j]='$';
        for(auto &it:dir){
            int new_i=i+it.first;
            int new_j=j+it.second;
            if(find(board,word,new_i,new_j,indx+1)){
                board[i][j]=temp;
                return true;
            }
        }
        board[i][j]=temp;
                return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
         m=board.size();
         n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && find(board,word,i,j,0)){
                    return true;
                }

            }
        }
        return false;

    }
};