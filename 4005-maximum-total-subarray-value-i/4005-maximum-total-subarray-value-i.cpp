class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
      int maxNum=INT_MIN;
      int minNum=INT_MAX;
      long long diff=-1;
      for(int i:nums){
        minNum=min(i,minNum);
        maxNum=max(i,maxNum);
        diff=maxNum-minNum;

      }
      return diff*k;
    }
};