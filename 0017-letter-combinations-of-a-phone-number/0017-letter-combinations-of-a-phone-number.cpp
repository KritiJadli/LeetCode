class Solution {
public:
    void solve(int idx,string &digits,vector<string>&result,string &temp,            unordered_map<char,string>&mp){
        char ch=digits[idx];
        string str=mp[ch];
        if(idx>=digits.size()){
            result.push_back(temp);
            return;
        }
        for(int i=0;i<str.size();i++){
            temp.push_back(str[i]);
            solve(idx+1,digits,result,temp,mp);
            temp.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return {};
        }
        vector<string>result;
        string temp="";
        unordered_map<char,string>mp={
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        solve(0,digits,result,temp,mp);
        return result;
    }
};