//
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    vector<int> price(1001,1001);
    for(int i=1;i<=1000;i++)
    {
        price[i]=min(price[i],i-1);
        for(int j=1;j<=i;j++)
        {
            int t=i+floor(i/j);
            if(t<1001)
            price[t]=min(price[i]+1,price[t]);
        }
    }
    for(int ii=0;ii<nn;ii++)
    {
        int n,k;
        cin>>n>>k;
        vector<int> cost(n);
        vector<int> value(n);
        for(int i=0;i<n;i++)
        {
            cin>>cost[i];
            cost[i]=price[cost[i]];
        }
        for(int i=0;i<n;i++)
        {
            cin>>value[i];
        }
        k=min(k,12*n);
        vector<vector<int>> dp(n+1,vector<int>(k+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=k;j++)
            {
                int nottake=dp[i-1][j];
                int take=0;
                if(j>=cost[i-1])take=value[i-1]+dp[i-1][j-cost[i-1]];
                dp[i][j]=max(take,nottake);
            }
        }
        cout<<dp[n][k]<<endl;
    }

}