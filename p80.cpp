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
        int a[n];
        int m=-1;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
        int flag=0;int c=1;
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
          if(a[i]==a[i+1])
          c++;
          else
          {
             if(c%2==1)
             flag=1;
             c=1;
          }
        }
        if(c%2==1)
             flag=1;
        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}