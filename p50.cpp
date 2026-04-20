#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
      int n;int k;
      cin>>n>>k;
      int b[n];
      long long int p=1;
      for(int i=0;i<n;i++)
      {
        cin>>b[i];
        p=p*b[i];
      }
      int f=0;
      if(p<=2023 && (2023%p)==0 && p!=0)
      {
           f=1;
      }
      if(f==1)
      {
        cout<<"YES"<<"\n";
        cout<<2023/p<<" ";
        for(int i=1;i<k;i++)
        cout<<1<<" ";
        cout<<"\n";
      }
      else
      {
        cout<<"NO"<<"\n";
      }
    }
}