class Solution {
public:
void printSubset(int i,vector<vector<int>>&ans,vector<int>&curr,vector<int>& nums){
    if(i==nums.size()){
        ans.push_back(curr);
        return;
    }
    curr.push_back(nums[i]);
    printSubset(i+1,ans,curr,nums);
    curr.pop_back();
    int indx=i+1;
    while(indx<nums.size() && nums[indx]==nums[indx-1]){
        indx++;

    }
    printSubset(indx,ans,curr,nums);



}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        sort(nums.begin(),nums.end());
        printSubset(0,ans,curr,nums);
        return ans;


    }
};