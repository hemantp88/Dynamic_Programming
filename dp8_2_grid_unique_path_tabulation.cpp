#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m,vector<int>(n,-1));
	// return f(m-1,n-1,dp);
	dp[0][0]=1;
for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0&&j==0)dp[i][j]=1;
                        else {

                          int right = 0, down = 0;
                          if (i > 0)
                            right = dp[i - 1][j];
                          if (j > 0)
                            down = dp[i][j - 1];
                          dp[i][j] = right + down;
                        }
                }
        }
	return dp[m-1][n-1];
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