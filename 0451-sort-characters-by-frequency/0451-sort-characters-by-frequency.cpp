class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        priority_queue<pair<int,char>>maxheap;
         for(auto it:mp){
            maxheap.push({it.second,it.first});
         }
         string ans="";
         while(!maxheap.empty()){
            int count= maxheap.top().first;
            char ch=maxheap.top().second;
            maxheap.pop();

         
         for(int i=0;i<count;i++){
            ans.push_back(ch);

         }
         }
         return ans;
    }
};