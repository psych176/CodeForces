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
     int n,q;
     cin>>n>>q;
     int a[n];
     int x[q];int t=0;
     for(int i=0;i<n;i++)
     cin>>a[i];
     for(int j=0;j<q;j++)
     cin>>x[j];
     for(int i=0;i<q;i++)
     {
        t=(int)pow(2,x[i]);
        for(int j=0;j<n;j++)
        {
            if(a[j]%t==0)
            {
                a[j]=a[j]+(int)pow(2,x[i]-1);
            }
        }
     }
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
     cout<<"\n";

   }
}