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
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      sort(a,a+n);
      int c=0;
      for(int i=1;i<n;i++)
      {
        c=c+a[i]-a[i-1];
      }
      cout<<c<<"\n";
    }
}