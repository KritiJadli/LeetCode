class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> vec;
        vector<char>freqP(26,0);
        vector<char>freqS(26,0);
         if (p.empty() || s.size() < p.size()) {
            return vec;
        }
        for(int i=0;i<p.size();i++){
            freqP[p[i]-'a']++;
        }
        int k=p.size();
        for(int i=0;i<k;i++){
            freqS[s[i]-'a']++;
        }
        for(int i=0;i<=s.size()-k;i++){
            if(freqP==freqS){
                vec.push_back(i);
            }
            freqS[s[i]-'a']--;
            if(i+k<s.size()){
                freqS[s[i+k]-'a']++;
            }
        }
        return vec;
    }
};