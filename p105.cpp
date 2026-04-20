#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<long long>> dp(2*1e5,vector<long long>(2,-1));
long long f(vector<int>& a,int i,int p)
{
    if(i>=a.size())
    return 0;
    if(dp[i][p]==-1)
    {
     if(p==0)
     {
        int c1=0;int c2=0;
        if(a[i]==1)
        {
            c1=1;
            c2=1;
        }
        if((i+1)<=(a.size()-1) && a[i+1]==1)
        {
           c2++;
        }
        if((i+1)<=(a.size()-1))
        dp[i][0]=min(c1+f(a,i+1,(p+1)%2),c2+f(a,i+2,(p+1)%2));
        else 
        dp[i][0]=c1+f(a,i+1,(p+1)%2);
        return dp[i][0];
     }
     else
        dp[i][1]=min(0+f(a,i+1,(p+1)%2),0+f(a,i+2,(p+1)%2));
        return dp[i][1];
    }
    else
    return dp[i][p];
}
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
            dp[i][0] = -1;
            dp[i][1] = -1;
        }
        cout<<f(a,0,0)<<endl;
    }
}