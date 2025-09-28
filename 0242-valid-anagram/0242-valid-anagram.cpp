class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>mp,np;
        for(char c:s) mp[c]++;
        for(char c:t) np[c]++;
        return mp==np;

      
    }
};