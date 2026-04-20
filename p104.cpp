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
       if(n==1)
       {
         int temp;
         cin>>temp;
         int cs=0;
         if(temp%2==1)
              cs+=1;
              temp/=2;
              cs+=temp;
              if(temp>0)
              cs++;
         cout<<cs<<endl;
         continue;
       }
       vector<long long> a(n);
       for(int i=0;i<n;i++)
       {
          cin>>a[i];
       }
       vector<long long> ps(n);
       sort(a.begin(),a.end());
       ps[0]=a[0];
       for(int i=1;i<n;i++)
       {
         ps[i]=ps[i-1]+a[i];
       }
       int l=0;long long cs=0;long long ls=0;
       int r=n-1;
       while(l<=r)
       {
          if((ps[r-1]-ls)>=a[r])
          {
             long long ans=0;
             long long low=l;
             long long high=r-1;
             while(low<=high)
             {
                long long mid=(low+high)/2;
                if((ps[mid]-ls)>=a[r])
                {
                   ans=mid;
                   high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
             }
             ls+=a[r];
             l=ans;
             cs+=a[r]+1;
             r--;
          }
          else
          {
              long long temp=ps[n-1]-2*ls;
              if(temp%2==1)
              cs+=1;
              temp/=2;
              cs+=temp;
              if(temp>0)
              cs++;
              break;
          }
       }
       cout<<cs<<endl;
    }
}