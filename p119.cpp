//Educational Codeforces Round 189 (Rated for Div. 2) C. Red-Black Pairs
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
        vector<vector<char>> g(n,vector<char>(2));
        vector<vector<bool>> vis(n,vector<bool>(2,0));
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>g[i][0];
        }
        for(int i=0;i<n;i++)
        {
            cin>>g[i][1];
            if(g[i][1]==g[i][0])
            {
                vis[i][0]=1;
                vis[i][1]=1;
                c++;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(vis[i][0]==0 && vis[i+1][0]==0 && g[i][0]==g[i+1][0] )
            {
                vis[i][0]=1;
                   vis[i+1][0]=1;
                    c++;
                
            }
            if(vis[i+1][1]==0 && vis[i][1]==0 && g[i][1]==g[i+1][1])
            {
                   vis[i][1]=1;
                   vis[i+1][1]=1;
                    c++;
            }
        }
        cout<<n-c<<endl;
    }
}