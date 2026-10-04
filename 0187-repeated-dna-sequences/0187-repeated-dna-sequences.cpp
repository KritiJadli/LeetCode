class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       vector<string>ans;
       unordered_map<string,int>mp;
       if(s.size()<10) return ans;
       for(int i=0;i<=s.size()-10;i++){
        string sub=s.substr(i,10);
        mp[sub]++;
        if(mp[sub]==2){
            ans.push_back(sub);
        }
       } 
       return ans;
    }
};