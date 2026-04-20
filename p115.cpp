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
        vector<int> a(n);
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       vector<int> g(n+1,INT_MAX);
       unordered_map<int,pair<int,int>> m;//{maxgap,last found}
       int fwd=INT_MAX;
       for(int i=0;i<n;i++)
       {
          if(m.find(a[i])==m.end())
          {
            m[a[i]]={i+1,i};
          }
          else
          {
             int gap=m[a[i]].first;
             int li=m[a[i]].second;
             if((i-li)>gap)
             {
                 m[a[i]]={i-li,i};
             }
             else
             {
                m[a[i]]={gap,i};
             }
          }
       }
       for(auto &it:m)
       {
             int gap=it.second.first;
             int li=it.second.second;
             if((n-li)>gap)
             {
                gap=n-li;
             }
             if(gap<=n)
             {
                g[gap]=min(g[gap],it.first);
             }
       }
       for (int i = 1; i < n; i++)
       {
         fwd=min(g[i],fwd);
         if(fwd==INT_MAX)
         cout<<-1<<" ";
         else
         cout<<fwd<<" ";
       }
       fwd=min(g[n],fwd);
       if(fwd==INT_MAX)
         cout<<-1<<endl;
         else
         cout<<fwd<<endl;
    }
}