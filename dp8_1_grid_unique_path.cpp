#include<bits/stdc++.h>
using namespace std;
int f(int m ,int n, vector<vector<int>>&dp)
{
	if(m==0&&n==0)return 1;
	if(m<0||n<0)return 0;
	if(dp[m][n]!=-1)return dp[m][n];
	
	return  dp[m][n] = f(m-1,n,dp)+f(m,n-1,dp);


}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m,vector<int>(n,-1));
	return f(m-1,n-1,dp);
	
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