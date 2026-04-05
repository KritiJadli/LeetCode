class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string>seen;
        unordered_set<string>repeat;
        for(int i=0;i+9<=s.size();i++){
            string sub= s.substr(i,10);
            if(seen.count(sub)){
                repeat.insert(sub);
            }
            else{
                seen.insert(sub);
            }
        }
        return vector<string>(repeat.begin(),repeat.end());
    }
};