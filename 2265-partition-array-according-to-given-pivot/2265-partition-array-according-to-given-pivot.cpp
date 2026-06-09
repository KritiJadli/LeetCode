class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left;
        vector<int>right;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                left.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                right.push_back(nums[i]);
            }
            
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                left.push_back(nums[i]);
            }
        }
        vector<int>merged;
        merged.insert(merged.end(),left.begin(),left.end());
        merged.insert(merged.end(),right.begin(),right.end());
        return merged;
    }
};