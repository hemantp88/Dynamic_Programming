 #include<bits/stdc++.h>
 using namespace std;
 
 int mod= int(1e9 +7) ;
int f(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp)
{
    if(i>=0&&j>=0&&arr[i][j]==-1)return dp[i][j]=0;
    if(i<0||j<0)return 0;
    if(i==0&&j==0)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]= (f(i-1,j,arr,dp)+f(i,j-1,arr,dp))%mod;
}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
vector<vector<int>>dp(n,vector<int>(m,-1));
return f(n-1,m-1,mat,dp);
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