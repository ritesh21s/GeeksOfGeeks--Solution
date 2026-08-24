class Solution {
  public:
    bool armstrongNumber(int n) {
        int revNum=0,ld, dup=n;
        while(n>0){
            ld= n%10;
            revNum= revNum + (ld*ld*ld);
            n = n/10;
        }
        if(revNum == dup){
            return true;
        }
        else {
            return false;
        }
      
        
    }
};