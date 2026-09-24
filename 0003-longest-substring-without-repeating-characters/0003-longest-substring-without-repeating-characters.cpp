class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp;
        if(s=="") return 0;
        int left=0;
        int maxLen=INT_MIN;
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