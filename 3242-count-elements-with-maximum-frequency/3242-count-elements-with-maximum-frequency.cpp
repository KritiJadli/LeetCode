class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int maxlen=0;
        for(auto &it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>maxlen){
                maxlen=it.second;
                ans={it.first};
            }
            else if(it.second==maxlen){
                ans.push_back(it.first);
            }
        }
        int sum=0;
        for(auto it:ans){
            sum+=mp[it];
        }
        return sum;
    }
};