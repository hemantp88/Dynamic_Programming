#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int prev2=0,prev1=1;
    int curr=prev1+prev2;
    for(int i=2;i<=n;i++)
    {
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;

    }
    cout<<curr;
    return 0;
}
