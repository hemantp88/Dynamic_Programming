// Problem Statement
// There are 
// N stones, numbered 
// 1,2,…,N. For each 
// i (1≤i≤N), the height of Stone 
// i is hi
// ​
//  .

// There is a frog who is initially on Stone 
// 1. He will repeat the following action some number of times to reach Stone 
// N:

// If the frog is currently on Stone 
// i, jump to one of the following: Stone 
// i+1,i+2,…,i+K. Here, a cost of 
// 
// |hi−hj| is incurred, where 
// j is the stone to land on.
// Find the minimum possible total cost incurred before the frog reaches Stone 
// N.


#include<bits/stdc++.h>
using namespace std;

int f(int n,int k,vector<int>&dp,vector<int>&heights)
{
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int minsteps=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        
        if(n-i>0)
        {
            int jmp = dp[n-i]+abs(heights[n]-heights[n-i]);
            minsteps= min(minsteps,jmp);
        }
        else break;

    }
    return dp[n]=minsteps;

}

int32_t main()
{
    int k;
    int n;
    cin>>n>>k;
    vector<int>h;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        h.push_back(a);
    }
    vector<int>dp(n,-1);
    cout<<f(n,k,dp,h);

    
   
}