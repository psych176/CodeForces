//
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> parent;
vector<int> a;
int mx;
bool check(int k)
{
        int n=a.size();
       for(int i=0;i<n;i++)
       {
          int c=k;
          ll cost=0;
          for(int j=i;j<n;j++,c--)
          { 
             if(j==n-1 && a[j]<c)
             cost+=1e9;
              if(a[j]<c)
              cost+=(c-a[j]);
              else
              break;
          }
          if(cost<=mx)
          return true;
       }
       return false;
}
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        int n;
        cin>>n>>mx;
        a.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=0;
        for(int i=0;i<n;i++)
        {
            l=max(l,a[i]);
        }
        int r=l+n;
        int ans=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(check(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                  r=mid-1;
            }
        }
        cout<<ans<<endl;
    }

}