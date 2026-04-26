//Codeforces Round 874 (Div. 3) E. Round Dance
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> parent;

int fup(int x)
{
     if(parent[x]==x)
     {
        return x;
     }
     else
     {
        return parent[x]=fup(parent[x]);
     }

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
           }
           parent.resize(n+1);
           for(int i=1;i<=n;i++)
           {
             parent[i]=i;
           }
           vector<int> size(n+1,1);
           vector<int> edge(n+1,0);
           map<pair<int,int>,int> m;
           for(int i=0;i<n;i++)
           {
              int e1=min(i+1,a[i]);
              int e2=max(i+1,a[i]);
              if(m[{e1,e2}]==1)
              {
                 continue;
              }
              else
              {
                m[{e1,e2}]=1;
                int u=fup(e1);
                int v=fup(e2);
                if(u!=v)
                {
                    if(size[u]>=size[v])
                    {
                        size[u]+=size[v];
                        parent[v]=u;
                        edge[u]=edge[u]+1+edge[v];
                    }
                    else
                    {
                        size[v]+=size[u];
                        parent[u]=v;
                        edge[v]=edge[v]+1+edge[u];
                    }
                }
                else
                {
                    edge[u]++;
                }
              }
           }
           int c1=0;
           int c2=0;
           for(int i=1;i<=n;i++)
           {
               int z=fup(i);
               if(z==i)
               {
                
                  if(edge[z]==size[z])
                  {
                     c1++;
                  }
                  else
                  {
                     c2++;
                  }
               }
           }
           

           cout<<c1+min(1,c2)<<" "<<c1+c2<<endl;
       }
}