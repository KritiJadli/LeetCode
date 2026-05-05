class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>vec(26,0);
            for(char c:p){
                vec[c-'a']++;
            }
           int i=0;
           int j=0;
           int count=p.size();
           int k=p.size();
           vector<int>res;
           while(j<s.size()){
            if(vec[s[j]-'a']>0){
                count--;
            }
            vec[s[j]-'a']--;
            if(j-i+1<k)j++;
            else if(j-i+1==k){
                if(count==0){
                    res.push_back(i);
                }
                if(vec[s[i]-'a']>=0){
                    count++;
                }
                vec[s[i]-'a']++;
                 i++;
                 j++;
            }
           
           }
        
        return res;
    }
};