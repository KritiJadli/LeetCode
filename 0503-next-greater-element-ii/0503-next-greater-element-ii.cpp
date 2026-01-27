class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>nge(n,-1);
        stack<int>st;
        for(int i=0;i<2*n;i++){
            int curr=i%n;
            while(!st.empty() && nums[curr]>nums[st.top()]){
                nge[st.top()]=nums[curr];
                st.pop();

            }
            if(i<n){
                st.push(i);
            }
        }
        return nge;



    }
};