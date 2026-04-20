#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int pp=0;pp<t;pp++)
   {
     int n;
     cin>>n;
     string a;
     cin>>a;
     int sum=0;int i;int c=0;bool tr[26];
     for(i=0;(sum+(int)a[i]-64)<n;i++)
     {
        sum=sum+(int)a[i]-64;
        if(tr[(int)a[i]-65]!=true)
        {
            c++;
            tr[(int)a[i]-65]=true;
        }
     }
     for(;i<a.length();i++)
     {
        if(tr[(int)a[i]-65]==true)
        {
            c--;
        }
     }
     cout<<c<<"\n";
   }
}