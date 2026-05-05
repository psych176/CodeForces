//C. Keshi Is Throwing a Party Codeforces Global Round 17
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> a;
vector<int> b;
int n;
bool check(int k)
{
      int c=0;
      for(int i=0;i<n;i++)
      {
          if(a[i]>=(k-1) && b[i]>=c)
          {
              k--;
              c++;
          }
          if(k<=0)     
          return true;
      }
      return false;
}
int solve()
{
        cin>>n;
        a.resize(n);
        b.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        int l=0;
        int r=n;
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
        return ans;
            
}
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        cout<<solve()<<endl;
    }

}