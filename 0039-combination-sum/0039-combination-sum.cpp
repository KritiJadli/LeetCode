class Solution {
public:
void getComb(vector<int>& candidates,vector<vector<int>> &ans,vector<int>& comb,int target,int index){
    //base case
    if(index==candidates.size()|| target<0)return;
    if(target==0 ){
            ans.push_back(comb);
            return;
        }
        comb.push_back(candidates[index]);//single
        getComb(candidates,ans,comb,target-candidates[index],index);
        comb.pop_back();
        //exclude+backtracking
        getComb(candidates,ans,comb,target,index+1);
    

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>comb;
        getComb(candidates,ans,comb,target,0);
        return ans;
    }
};