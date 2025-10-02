class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>>pq;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            if(i>=k-1){
                while(pq.top().second<=i-k){
                    pq.pop();
                }
                arr.push_back(pq.top().first);
            }
            
        }
        return arr;

       
    }
};