#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
       int n;
       cin>>n;
       int a[n];
       int b[26];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<26;i++)
       {
           b[i]=-1;
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<26;j++)
           {
              if(b[j]==(a[i]-1))
              {
                b[j]++;
                break;
              }
           }
       }
       string s="";
       for(int i=n-1;i>=0;i--)
       {
           for(int j=25;j>=0;j--)
           {
               if(b[j]==a[i])
               {
                  b[j]--;
                  s=(char)(97+j)+s;
                  break;
               }
           }
       }
       cout<<s<<"\n";
    }
}