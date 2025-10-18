class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first=strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(first)!=0){
                first=first.substr(0,first.size()-1);
                if(first.empty())return "";
            }
        }
        return first;
    }
};