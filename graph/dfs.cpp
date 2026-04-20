#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
void addedge(int a,int b,int* a1,int n)
{
   *(a1+n*a+b)=1;
   *(a1+n*b+a)=1;
}
void dfs(int a,int* a1,int n)
{
    stack<int> s;
    bool vis[n];
    s.push(a);int flag=0;
    while(!(s.empty()))
    {
      int t;
      t=s.top();
      vis[t]=1;
      if(flag==1)
      {
      cout<<t+1<<" ";
      s.pop();
      if(!(s.empty()))
      t=s.top();
      }
      flag=1;
      for(int i=0;i<n;i++)
      {
         if(*(a1+n*t+i)==1 && vis[i]!=1) 
         {
            s.push(i);
            flag=0;
            break;
         }
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
     dfs(0,&(a[0][0]),n);
}