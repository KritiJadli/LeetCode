class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrice=INT_MAX;
        for(int num:prices){
            minPrice=min(minPrice,num);
            maxProfit=max(maxProfit,num-minPrice);

        }
        return maxProfit;
    }
};