class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n=nums.size();
        vector<int>ans(n+1,0);
        for(int num:nums){
            ans[num]++;
        }
        int missing=-1;
        int repeat=-1;
        for(int i=1;i<=n;i++){
            if(ans[i]==0) missing=i;
            if(ans[i]==2) repeat=i;
        }
        return {repeat,missing};


    }
};