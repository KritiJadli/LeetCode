class Solution {
public:
    int lengthOfLastWord(string s) {
        int word=s.size()-1;
        int sum=0;
        while(word>=0 && isspace(s[word])){
            word--;
        }
      while(word>=0 && !isspace(s[word])){
        sum++;
        word--;
    }
      return sum;
    }
};