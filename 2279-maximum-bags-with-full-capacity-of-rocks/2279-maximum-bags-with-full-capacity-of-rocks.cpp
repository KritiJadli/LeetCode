class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
       vector<int>needed;
        int count =0;
        for(int i=0;i<capacity.size();i++){
           needed.push_back(capacity[i]-rocks[i]);
        }
        sort(needed.begin(),needed.end());
        for(int i:needed){
            if(additionalRocks>=i){
                additionalRocks-=i;
                count++;
            }
            else break;
        }
        return count;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna