//Educational Codeforces Round 122 (Rated for Div. 2)  D. Make Them Equal
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> parent;
int fup(int x)
{
     if(parent[x]==x)
     return x;
     else
     {
        parent[x]=fup(parent[x]);
        return parent[x];
     }
}
string solve()
{
        int n;
        cin>>n;
        vector<vector<int>> v(n,vector<int>(2,-1));
        vector<int> check(n,2);
        bool f=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i][0]>>v[i][1];
            check[v[i][0]-1]--;
            check[v[i][1]-1]--;
            if(v[i][0]==v[i][1] || check[v[i][0]-1]<0 || check[v[i][1]-1]<0)
            f=1;
        }
        if(f)
        return "NO";
        parent.resize(n);
        for(int i=0;i<n;i++)
        {
           parent[i]=i;
        }
        vector<int> size(n,1);
        vector<int> last(n+1,-1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
            int n1=v[i][j];
            if(last[n1]==-1)
            last[n1]=i;
            else
            {
                int u=fup(i);
                int v=fup(last[n1]);
                if(u!=v)
                {
                    if(size[v]>size[u])
                    {
                    parent[u]=v;
                    size[v]+=size[u];
                    }
                    else
                    {
                    parent[v]=u;
                    size[u]+=size[v];
                    }
                }
            }
            }
            
        }
        for(int i=0;i<n;i++)
            {
                int x=fup(i);
                if(x==i)
                {
                   if(size[x]%2==1) 
                   return "NO";
                }
            }
            return "YES";
}
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        cout<<solve()<<endl;
    }

}