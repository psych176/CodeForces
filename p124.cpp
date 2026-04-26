//Codeforces Round 785 (Div. 2) C. Palindrome Basis
//Educational Codeforces Round 58 (Rated for Div. 2) C. Division and Union
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        int nn;
        cin>>nn;
        int cons=4*1e4;
        vector<int> palin;
        for(int i=1;i<=cons;i++)
        {
             int t=i;
             string s=to_string(i);
            bool f=1;
            for(int j=0;j<(s.length()/2);j++)
            {
               if(s[j]!=s[s.length()-1-j])
               f=0;
            }
            if(f)
            palin.push_back(i);
        }
        int n1=palin.size();
        int n2=n1;
        cons=1e9+7;
        
            int n=4*1e4+2;
            n1=n2;
            vector<vector<ll>> dp(n1+1,vector<ll>(n+1,0)); for(int i=0;i<n1;i++) { dp[i][0]=1; } for(int i=n1-1;i>=0;i--) { for(int j=1;j<=n;j++) { ll skip=dp[i+1][j]; ll take=0; if(palin[i]<=j) take=dp[i][j-palin[i]]; dp[i][j]=(skip+take)%cons;}}

        for(int ii=0;ii<nn;ii++)
        {
            cin>>n;
            cout<<dp[0][n]<<endl;   
        }
        
}