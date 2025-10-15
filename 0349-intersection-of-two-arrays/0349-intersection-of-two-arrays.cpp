class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st(nums1.begin(),nums1.end());
        set<int>ans;
        for(int num:nums2){
            if(st.count(num)){
                ans.insert(num);
            }
        }
        vector<int>arr(ans.begin(),ans.end());
        return arr;


    }
};