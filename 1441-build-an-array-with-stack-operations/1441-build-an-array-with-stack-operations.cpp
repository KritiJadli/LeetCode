class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>arr;
        int j=0;
        for(int i=1;i<=n && j<target.size();i++){
                arr.push_back("Push");
                 if(i==target[j]){
                j++;
            }
            else{
                arr.push_back("Pop");
            }

        }
        return arr;
    }
};