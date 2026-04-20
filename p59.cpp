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
      int a[n];long long int s=0;int check=0;
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
         s=s+a[i];
         if(a[i]%3==1)
         check=1;
      }
      if(s%3==0)
      cout<<0<<endl;
      else if(s%3==2)
      cout<<1<<endl;
      else if(s%3==1 && check==1)
      cout<<1<<endl;
      else
      cout<<2<<endl;
    }
}