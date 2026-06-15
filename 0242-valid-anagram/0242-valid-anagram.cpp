class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp,np;
        if(s.length()!=t.length()) return false;
        for(char c:s)mp[c]++;
        for(char c:t)np[c]++;
        return mp==np;
    }
};