#include <bits/stdc++.h>
using namespace std;

int main() {
     int n,k;
     cin>>n>>k;
     vector<int> pr(n,0);
     vector<int> pa(n,0);
     vector<int> dp(k+1,0);
     for(int i=0;i<n;i++)
     {
      cin>>pr[i];
     }
     for(int i=0;i<n;i++)
     {
     cin>>pa[i];
     }

     for(int i=0;i<n;i++)
     {
        for(int j=k;j>0;j--)
        {
         if(j-pr[i]>=0)
         {
           dp[j]=max(dp[j],dp[j-pr[i]]+pa[i]);
         }
         else
         break;
        }
     }
     cout<<dp[k];
}