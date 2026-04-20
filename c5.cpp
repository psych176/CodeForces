#include <bits/stdc++.h>
using namespace std;

int main() {

     int n;
     cin>>n;
     long long int dp[n][n];
     char a[n][n];
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            dp[i][j]=0;
            if(a[i][j]=='*')
            {
               dp[i][j]=-1;
            }
        }
     }
     long long int m=1000000007;
     if(dp[0][0]!=-1)
     dp[0][0]=1;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(dp[i][j]!=-1)
            {
                long long int x=0;
                if(i-1>=0 && dp[i-1][j]!=-1)
                {
                    dp[i][j]=(dp[i-1][j])%m;
                }
                if(j-1>=0 && dp[i][j-1]!=-1)
                {
                    dp[i][j]=(dp[i][j]+dp[i][j-1])%m;
                }
            }
        }
     }
     if(dp[n-1][n-1]!=-1)
     cout<<dp[n-1][n-1]<<endl;
     else
     cout<<0<<endl;
}