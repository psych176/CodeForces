#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cs(ll a) //counting the numbe rof set bits
{
    int c=0;
   while(a>0)
   {
    if(a&1)
    c++;
    a=a>>1;
   }
   return c;
}
int main()
{
    int nn;
    cin>>nn;
    vector<long long> f(14);
    f[0]=1;
    for(long long i=1;i<14;i++)
    {
      f[i]=f[i-1]*(i+1);
    }
    for(int ii=0;ii<nn;ii++)
    {
        long long n;
        cin>>n;
        long long c=n;
        int total=0;
        while(c>0)
        {
            if(c&1)
            total++;
            c=c>>1;
        }
        if(total==1)
        {
            cout<<1<<endl;
            continue;
        }
        ll ans=LONG_LONG_MAX;
        for(ll i=0;i<(1LL<<14);ip++)
        {
            ll sum=0;
            c=0;
            for(int j=0;j<14;j++)
            {
                if(i&(1LL<<j))
                {
                    sum+=f[j];
                    c++;
                }
            }
            if(sum>n)
            continue;
            else
            {
                ans=min(ans,cs(n-sum)+c);
            }
            
        }
        cout<<ans<<endl;
    }
}