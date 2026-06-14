class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int i=0;
        int j=height.size()-1;
        while(j>i){
            int width=j-i;
            int ht=min(height[i],height[j]);
            int area=width*ht;
            maxWater=max(maxWater,area);
           if(height[i]<height[j]){
           i++;
           }
           else j--;
        }
        return maxWater;
       
    }
};