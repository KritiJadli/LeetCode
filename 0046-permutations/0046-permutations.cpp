class Solution {
public:
void getPerms(vector<int>& nums,vector<vector<int>>&ans,int indx){
    if(indx==nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i=indx;i<nums.size();i++){
        swap(nums[i],nums[indx]);
        getPerms(nums,ans,indx+1);
        swap(nums[i],nums[indx]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getPerms(nums,ans,0);
        return ans;

    }
};