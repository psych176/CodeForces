#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
void addedge(int a,int b,int* a1,int n)
{
   *(a1+n*a+b)=1;
   *(a1+n*b+a)=1;
}
void bfs(int a,int* a1,int n,bool* vis)
{
    queue<int> q;
    q.push(a);
    while(!(q.empty()))
    {
      int t;
      t=q.front();
      vis[t]=1;
      cout<<t+1<<" ";
      q.pop();

      for(int i=0;i<n;i++)
      {
         if(*(a1+n*t+i)==1 && vis[i]!=1) 
         q.push(i);
      }
    }
}
int main()
{
     int n,m;
     cin>>n>>m;
     const int n1=n;
     int a[n][n];
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
        }
     }
     for(int i=0;i<m;i++)
     {
        int t1,t2;
        cin>>t1>>t2;
        addedge(t1,t2,&(a[0][0]),n);
     }
      for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
     }
       bool vis[n];
       int c=0;
       for(int i=0;i<n;i++)
       {
        if(vis[i]!=1)
        {
            bfs(i,&(a[0][0]),n,&(vis[0]));
            c++;
        }
       }
       cout<<c<<"\n";
}