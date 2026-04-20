#include <bits/stdc++.h>
using namespace std;

int main() {

     int n;
     cin>>n;
     vector<int> dp(n+1,INT_MAX);
     dp[0]=0;
     for(int i=1;i<n+1;i++)
     {
        if(i<10)
        {
            dp[i]=1;
        }
        else
        {
            for(auto c: to_string(i))
            {
                int x=c-'0';
                dp[i]=min(dp[i],1+dp[i-x]);
            }
        }
     }
     cout<<dp[n]<<"\n";
}