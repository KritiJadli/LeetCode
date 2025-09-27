class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        nums.clear();
        for(int it:st){
            nums.push_back(it);
        }
        return nums.size();
    }
};