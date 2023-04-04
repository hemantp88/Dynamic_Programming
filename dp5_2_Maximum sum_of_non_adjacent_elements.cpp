// space optimised
#include<bits/stdc++.h>
using namespace std;

// 
// #define int long long
#include <bits/stdc++.h> 
using namespace std;
int maximumNonAdjacentSum(vector<int> &nums){

    int n=nums.size();

int prev2=0;
int prev1=nums[0];

int curr=prev1;
    for(int i=1;i<n;i++)
    {
        int pick=nums[i];
        if(i>1)pick+=prev2;
        
        int not_pick=prev1;
        curr=max(pick,not_pick);
        prev2=prev1;
        prev1=curr;

    }
    return curr;
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
  
    return 0;
}