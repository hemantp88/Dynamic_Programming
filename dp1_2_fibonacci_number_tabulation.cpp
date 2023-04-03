#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n+1;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];

    }
    cout<<dp[n+1];

    return 0;
}

// t = n;
// s =n;