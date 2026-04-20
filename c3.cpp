#include <bits/stdc++.h>
using namespace std;

int main() {

     int n, x;
     cin>>n>>x;
     vector<long long> dp(x+1,0);
     int c[n];
     for(int i=0;i<n;i++)
     {
        cin>>c[i];
     }
     dp[0]=0;
     for(int i=1;i<=x;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(i-c[j]>=0)
            {
                if(dp[i-c[j]]!=0)
                dp[i]=(dp[i-c[j]]+dp[i])%1000000007;
                else if(i-c[j]==0)
                 dp[i]=(dp[i]+(long long)1)%1000000007;
            } 
            
        }
     }
    //  if(dp[x]==INT_MAX)
    //  cout<<-1<<endl;
    //  else
     cout<<dp[x]<<"\n";
} 