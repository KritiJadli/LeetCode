class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>arr(nums.begin(),nums.end());
        nums.clear();
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=val){
                nums.push_back(arr[i]);
                
            }

        }
        return nums.size();
        
    }
};