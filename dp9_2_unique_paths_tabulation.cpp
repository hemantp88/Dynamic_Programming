@+#include<bits/stdc++.h>
using namespace std;


// #define int long long
void solve()
{
 
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
vector<vector<int>>dp(n,vector<int>(m,-1));
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int down=0,right=0;
            if(mat[i][j]==-1)dp[i][j]=0;
           else  if(i==0&&j==0)dp[i][j]=1;
           else {
             if (i > 0)
               down = dp[i - 1][j];
             if (j > 0)
               right = dp[i][j - 1];
             dp[i][j] = (down + right)%mod;
           }
        }

    }
    return dp[n-1][m-1];
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