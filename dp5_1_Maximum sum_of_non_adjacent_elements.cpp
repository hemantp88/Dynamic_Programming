#include<bits/stdc++.h>
using namespace std;


int f(int n,vector<int>&dp,vector<int>&arr)
{   if(n==0)return arr[n];
    if(n<0)return 0;
     else if(dp[n]!=-1)return dp[n];
    int pick = arr[n]+f(n-2,dp,arr);
    int notpick =f(n-1,dp,arr);
   
    return dp[n]=max(pick,notpick);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    vector<int>dp(n,-1);
    return f(n-1,dp,nums);
}

int32_t main()
{
    
    return 0;
}