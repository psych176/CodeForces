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
      int o=0;
      int z=0;
      //zeroes odd or even ones
      for(int i=0;i<n;i++)
      {
        if(s[i]=='1')
        o++;
        else
        z++;
      }
      if(o==0)
      {cout<<0<<endl;
          continue;}
          
      if(z%2==1 || o%2==0)
      {
          if(z%2==1)
          {
             cout<<z<<"\n";
             for(int i=0;i<n;i++)
             {
                  if(s[i]=='0')
                  cout<<i+1<<" ";
             }
          }
          else
          {
               cout<<o<<"\n";
             for(int i=0;i<n;i++)
             {
                  if(s[i]=='1')
                  cout<<i+1<<" ";
             }   
          }
          cout<<endl;
      }
      else
      {
          cout<<-1<<endl;
      }
    }
}