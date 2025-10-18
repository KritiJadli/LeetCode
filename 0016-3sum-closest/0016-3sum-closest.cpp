class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum=nums[0]+nums[1]+nums[2];
        for(int k=0;k<=nums.size()-2;k++){
            int i=k+1;
            int j=nums.size()-1;
            while(i<j){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-closestSum)){
                    closestSum=sum;
                }
                if(sum<target)i++;
                else j--;
            }
        }
        return closestSum;
       
    }
};