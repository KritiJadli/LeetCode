class Solution {
public:
    bool canWinNim(int n) {
      if(n>0 && n<=3) return true;
      else if(n%4==0) return false;
      return true;
    }
};