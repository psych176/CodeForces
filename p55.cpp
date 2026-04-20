#include <iostream>
#include <bits/stdc++.h>
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
      long long int c=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
        if(c>=a[i])
        {
            c=a[i]*((c/(long long int)a[i])+1);
        }
        else 
        {
            c=a[i];
        }
      }
      cout<<c<<"\n";
    }
}