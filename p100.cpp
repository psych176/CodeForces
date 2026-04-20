#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
      long long n;long long h;long long k;
      cin>>n>>h>>k;
      vector<int> b(n);
      long long sum=0;
      for(int i=0;i<n;i++)
      {
          cin>>b[i];
          sum+=(long long)b[i];
      }
      long long time=(h/sum)*(n+k);
      h=h%sum;
      if(h==0)
      {
        cout<<time-k<<endl;
        continue;
      }
      vector<long long> sfm(n);
      sfm[n-1]=b[n-1];
      for(int i=n-2;i>=0;i--)
      {
        if(b[i]>sfm[i+1])
        sfm[i]=b[i];
        else
        sfm[i]=sfm[i+1];
      }
      vector<long long> pmin(n);
      vector<long long> summ(n);
      pmin[0]=b[0];
      summ[0]=b[0];
      for(int i=1;i<n;i++)
      {
          summ[i]=summ[i-1]+b[i];
        if(b[i]<pmin[i-1])
        pmin[i]=b[i];
        else
        pmin[i]=pmin[i-1];

      }
      for(int i=0;i<n;i++)
      {
         time++;
         int m=i+1;
         if(m==n)
         {

         }
         else
         {
         if((h-summ[i])<=0 || (h-(summ[i]-pmin[i]+sfm[m]))<=0)
         break;
         }
      }
      cout<<time<<endl;
    }
}
