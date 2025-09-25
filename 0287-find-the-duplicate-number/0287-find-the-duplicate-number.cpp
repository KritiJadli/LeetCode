class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto &[key,pair]:mp){
            if(pair>1){
                return key;
            }
        }
        return 0;
    }
};