class Solution {
public:
    int beautySum(string s) {
        int total=0;
       for(int i=0;i<s.size();i++){
        unordered_map<char,int>mp;
        for(int j=i;j<s.size();j++){
            mp[s[j]]++;
            int maxfreq=0;
            int minfreq=INT_MAX;
            for(auto &p:mp){
                maxfreq=max(maxfreq,p.second);
                minfreq=min(minfreq,p.second);
            }
             total+=maxfreq-minfreq;


        }
       
       }
       return total;
       
    }
};