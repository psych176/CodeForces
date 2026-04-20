#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
      int n;
      cin>>n;
      string s;
      cin>>s;
      int mx=0;
      for(int i=0;i<n;i++)
      {
        char ch=s[0];
        int t=1;
          for(int j=0;j<n;j++)
          {
             if(s[j]!=ch)
             {
                t++;
                ch=s[j];
             }
          }
          if(ch!=s[n-1])
          t++;
          mx=max(t,mx);
          ch=s[0];
          for(int j=0;j<n-1;j++)
          {
            s[j]=s[j+1];
          }
          s[n-1]=ch;
      }
      cout<<mx<<endl;
    }
}