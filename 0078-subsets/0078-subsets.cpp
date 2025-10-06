class Solution {
public:
void findSubsets(int i,vector<int>& nums,vector<int>&curr,vector<vector<int>>&ans){
    if(i==nums.size()){
        ans.push_back(curr);
        return;
    }
    //include subsets
    curr.push_back(nums[i]);
    findSubsets(i+1,nums,curr,ans);
    //backtracking
    curr.pop_back();
    findSubsets(i+1,nums,curr,ans);


}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        vector<vector<int>>ans;
        findSubsets(0,nums,curr,ans);
        return ans;
    }
};