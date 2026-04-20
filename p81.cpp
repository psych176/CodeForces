#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
      int a,b;
      string a1,b1,c1;
      string ans;
      cin>>a>>a1>>b>>b1>>c1;
      string s1,s2;
      for(int i=0;i<b;i++)
      {
         if(c1[i]=='V')
         s1=b1[i]+s1;
         else
         s2=s2+b1[i];
      }
      ans=s1+a1+s2;
      cout<<ans<<"\n";
    }
}