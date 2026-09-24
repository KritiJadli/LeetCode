class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        int left=0;
        unordered_map<char,int>mp;
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