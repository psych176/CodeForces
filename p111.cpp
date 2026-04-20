#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> dp(n+1);
        dp[n]=0;
        dp[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            if((i+1+a[i])>n)
            dp[i]=1+dp[i+1];
            else
            {
            dp[i]=min(1+dp[i+1],dp[i+1+a[i]]);
            }
        }
        cout<<dp[0]<<endl;
    }
}