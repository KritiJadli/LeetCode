class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;

        }
        for(auto &[key,value]:mp){
            if(value==1){
                return key;
            }
        }
        return 0;
    }
};