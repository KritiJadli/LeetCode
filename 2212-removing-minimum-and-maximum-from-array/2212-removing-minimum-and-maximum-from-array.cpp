class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_val=INT_MAX;
        int max_val=INT_MIN;
        int min_ind=-1;
        int max_ind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min_val){
                min_val=nums[i];
                min_ind=i;
            }
            if(nums[i]>max_val){
                max_val=nums[i];
                max_ind=i;
            }
        }
        int rem_front=max(min_ind,max_ind)+1;
        int rem_back=max(nums.size()-min_ind,nums.size()-max_ind);
        int rem_both=min(min_ind+1+(nums.size()-max_ind), max_ind+1+(nums.size()-min_ind));
        return min({rem_front, rem_back,rem_both});

    }
};