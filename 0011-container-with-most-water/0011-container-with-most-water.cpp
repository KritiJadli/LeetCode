class Solution {
public:
    int maxArea(vector<int>& height) {
         int left=0;
         int right=height.size()-1;
         int maxSum=0;
         int maxa=0;

         while(right>left){
            int h=min(height[left], height[right]);
            int w= right-left;
            int a=h*w;
            maxa=max(a,maxa);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }

         }
         return maxa;
    }
};