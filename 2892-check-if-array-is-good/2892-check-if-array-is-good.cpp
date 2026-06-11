class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxEle=INT_MIN;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        bool isGood=false;
        for(int i=0;i<nums.size();i++){
            maxEle=max(maxEle,nums[i]);
            if(nums.size()==(maxEle+1) && mp[maxEle]==2){
               isGood=true;
            }
        }
        for(int i=1;i<maxEle;i++){
            if(mp[i]!=1){
                isGood=false;
            }
        }
        return isGood;
        
    }
};