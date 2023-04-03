// Problem Link: https://bit.ly/3t1Sjyx
// Count Ways To Reach The N-th Stairs

#include <bits/stdc++.h> 
// vector<long long int>dp(100001,-1);
long long int mod=1000000007;
int countDistinctWays(int n) {
   if(n==1||n==0)return 1;
//    return 1;
   int prev1=1,prev2=1,curr;
   for(int i=2;i<=n;i++)
   {
       curr=(prev1+prev2)%mod;
       prev1=prev2;
        prev2=curr;
   }
   return curr;
    
}