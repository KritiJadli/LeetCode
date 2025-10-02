class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxheap(stones.begin(),stones.end());
        while(maxheap.size()>1){
            int y=maxheap.top(); maxheap.pop();
            int x=maxheap.top(); maxheap.pop();
            if(y!=x){
                maxheap.push(y-x);
            }
        }
        return maxheap.empty()? 0:maxheap.top();
    }
};