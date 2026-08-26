class Solution {
  public:
    long long sumOfDivisors(long long n) {
        long long sum = 0;
        long long total= 0;
        for(int i=1; i<=n; i++){
            //if(n%i == 0){
                // sum = sum+i;
                total =total+(i*(n/i));
                
            //}
            
        }
        
        return total;
        
    }
};