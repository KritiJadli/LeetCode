class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>freq(26,0);
        for(char c:p){
            freq[c-'a']++;
        }
        int count=p.size();
        int k=p.size();
        vector<int>res;
        int i=0;
        int j=0;
        while(j<s.size()){
            if(freq[s[j]-'a']>0){
                count--;
            }
            freq[s[j]-'a']--;

            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(count==0){
                    res.push_back(i);    
                }
                if(freq[s[i]-'a']>=0){
                    count++;
                }
                freq[s[i]-'a']++; 
                i++;
                j++;
           
            } 
            
            
        }
        return res;
    }
};