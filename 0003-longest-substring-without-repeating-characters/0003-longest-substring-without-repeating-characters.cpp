class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int maxLen=0;
        int left=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[left]]--;
                left++;
            }
            maxLen=max(maxLen,i-left+1);
            

        }
        return maxLen;

    }
};