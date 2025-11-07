class Solution {
public:
    void perms2(vector<int>& nums,vector<vector<int>>&res,int indx){
        if(indx==nums.size()){
            res.push_back({nums});
        }
        unordered_set<int>st;
        for(int i=indx;i<nums.size();i++){
             if(st.find(nums[i])!=st.end()){
            continue;
        }
        st.insert(nums[i]);
            swap(nums[i],nums[indx]);
            perms2(nums,res,indx+1);
            swap(nums[i],nums[indx]);
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>res;
         perms2(nums,res,0);
         return res;
        
    }
};