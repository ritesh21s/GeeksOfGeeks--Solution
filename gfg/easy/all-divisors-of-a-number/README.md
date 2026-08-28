# All Divisors of a Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer  **n,**  return all the divisors of n in the  **ascending** order.
 
 **Examples:** 

```
Input : n = 20
Output: 1 2 4 5 10 20
Explanation: 20 is completely divisible by 1, 2, 4, 5, 10 and 20.

```

```
Input: n = 21191
Output: 1 21191
Explanation: As 21191 is a prime number, it has only 2 factors(1 and the number itself).
```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-28T13:08:26.308Z  

```cpp
class Solution {
  public:
    vector<int> getDivisors(int n) {
        vector<int> v;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i == 0){
                v.push_back(i) ;
                if((n/i)!= i){
                    v.push_back(n/i);
            }
            }
           
        }
        sort(v.begin(), v.end());
        for(auto it: v)
        return v;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/all-divisors-of-a-number/1)