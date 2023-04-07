#include<bits/stdc++.h>
using namespace std;

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>>dp(n,vector<int>(4,-1));
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         if(i!=j)
    //         {
    //             dp[0][i]=max(points[0][j],points[0][j]);
    //         }
    //     }   
    // }

    dp[0][0]=max(points[0][1],points[0][2]);
    dp[0][1]=max(points[0][0],points[0][2]);
    dp[0][2]=max(points[0][0],points[0][1]);
    dp[0][3]=max(points[0][1],max(points[0][2],points[0][0]));
    for(int day=1; day<n ;day++)
    {
        for(int last=0; last<4;last++)
        {
            // dp[day][last]
            int maxi=0;
            for(int task=0;task<3;task++)
            {
                if(task!=last)
                {
                    int pt=points[day][task]+dp[day-1][task];
                    dp[day][last]=max(dp[day][last],pt)
                }
            }

            // dp[day][last]=maxi;
            
        }    
    }
    return dp[n-1][3];
    
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