class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto [key,value]:mp){
            if(value>nums.size()/2){
                return key;
            }
        }
        return -1;
    }
};