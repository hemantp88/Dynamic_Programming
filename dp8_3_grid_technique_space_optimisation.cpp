#include <bits/stdc++.h> 
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
	// vector<vector<int>>dp(m,vector<int>(n,-1));
	// // return f(m-1,n-1,dp);
	// dp[0][0]=1;
	vector<int>prev(n,0);
for(int i=0;i<m;i++)
	{
		vector<int>cur(n,0);
		for(int j=0;j<n;j++)
		{
			if(i==0&&j==0)cur[j]=1;
                        else {

                          int right = 0, down = 0;
                          if (i > 0)
                            right = prev[j];
                          if (j > 0)
                            down = cur[j - 1];
                         cur[j] = right + down;
                        }
                }
				prev=cur;

        }
	return prev[n-1];
}