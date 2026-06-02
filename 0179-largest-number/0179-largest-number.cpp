class Solution {
public:
    string largestNumber(vector<int>& nums) {
       vector<string>vec;
        for(int num:nums){
            vec.push_back(to_string(num));
        }
        sort(vec.begin(),vec.end(),[](string a,string b){
            return  a+b>b+a;
        });
        string ans="";
        if(vec[0]=="0"){
            return "0";
        }
        for(string s : vec){
            ans+=s;
        }
        return ans;
    }
};