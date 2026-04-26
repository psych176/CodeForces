//Codeforces Round 484 (Div. 2) C. Cut 'em all!
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<long long> c;
vector<vector<int>> edge;

long long f(int i,int parent)
{
    if(c[i]!=0)
    {
       return c[i];
    }
     for(int j=0;j<edge[i].size();j++)
     {
          if(edge[i][j]!=parent)
          c[i]+=f(edge[i][j],i);
     }
     c[i]++;
     return c[i];
}
int main()
{
     int n;
     cin>>n;
     c.resize(n+1,0);
     edge.resize(n+1);
    for(int i=0;i<(n-1);i++)
    {
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    if(n%2==1)
    {
        cout<<-1<<endl;
        return 0;
    }
     long long ans=0;
     f(1,-1);
    for(int i=2;i<=n;i++)
    {
        if(c[i]%2==0 )
        ans++;
    }
    cout<<ans<<endl;
}