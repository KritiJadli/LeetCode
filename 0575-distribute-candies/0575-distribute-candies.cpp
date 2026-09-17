class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>s;
        int n=candyType.size();
        for(int x:candyType){
            s.insert(x);
        }
        return min(n/2, (int)s.size());
    }
};