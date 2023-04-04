// https://www.codingninjas.com/codestudio/problems/house-robber_839733?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
#include <bits/stdc++.h> 
using namespace std;

long long int f(vector<int>&nums)
{
    long long  int n=nums.size();
    long long int prev2=0,prev1=nums[0],curr=nums[0];
    for(long long int i=1;i<n;i++)
    {
        long long int pick1=nums[i];
        if(i>1)pick1+=prev2;
        long long int pick2=prev1;
        curr=max(pick1,pick2);
        prev2=prev1;
        prev1=curr;
    }
   return curr;
    
}
long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    long long int n=valueInHouse.size();
    vector<int> temp1,temp2;
    if(n==1)return valueInHouse[0];
    for(long long int i=0;i<n;i++)
    {
        if(i!=0)temp1.push_back(valueInHouse[i]);
        if(i!=n-1)temp2.push_back(valueInHouse[i]);
    }
   return max(f(temp1),f(temp2));

}