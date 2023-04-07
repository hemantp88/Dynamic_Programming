// #include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

int f(int n,vector<vector<int>> &points,int last,vector<vector<int>>&dp)
{
    
    int maxi=0;
    if(n==0)
    {
        for(int i=0;i<3;i++)
        {
            if(i!=last)maxi=max(maxi,points[n][i]);

        }
        return dp[0][last]=maxi;
    }
    if(dp[n][last]!=-1)return dp[n][last];
    for(int i=0;i<3;i++)
    {
        if(i!=last)maxi=max(maxi,points[n][i]+f(n-1,points,i,dp));

    }
    return dp[n][last]= maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>>dp(n,vector<int>(4,-1));
    // Write your code here.
    return f(n-1,points,3,dp);
}

// #define int long long
void solve()
{
 
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}