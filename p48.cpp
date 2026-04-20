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
      long long int sum=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        sum=sum+a[i];
      }
      if(n==1)
      {
        cout<<"YES"<<"\n";
      }
      else
      {
          long long int c=sum/n;
          long long int sur=0;
          int flag=0;
          for(int i=0;i<n;i++)
          {
            if(((long long int)a[i]+sur)>=c)
            {
               sur=sur+a[i]-c;
            }
             else
             {
                flag=1;
                break;
             }
          }
          if(flag==1)
          {
          cout<<"NO"<<"\n";
          }
          else
          cout<<"YES"<<"\n";
      }
    }
}