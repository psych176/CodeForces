#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
       long long int x,n;
       cin>>n>>x;
       int a[n];
       for(int i=0;i<n;i++)
       {
          cin>>a[i];
       }
       sort(a,a+n);
       long long int h=a[0];long long int x1=0;long long int k=0;
       while(x>=x1)
       {
          if(k<n)
          {
            if(h>=a[k])
            {
             k++;
             while(k<(n-1) && a[k]==a[k+1]) 
              {
              k++;
              }
              if(k==n-1 && h>=a[k])
              k++;
            }
            x1=x1+k;
            h++;
          }
          else
          {
              x1=x1+n;
              h++;
          }
       }
       cout<<h-1<<"\n";
    }
}