#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
   cin>>n;
   int x;
   if(n<=6)
   x=6;
   else
   x=n;
   long long int dp[x+1];
   dp[1]=1;
   dp[2]=2;
   dp[3]=4;
   dp[4]=8;
   dp[5]=16;
   dp[6]=32;
   long long m=1000000007;
   for(int i=7;i<=n;i++)
   {
       dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
       dp[i]%=m;
   }
   cout<<dp[n]<<"\n";
} 