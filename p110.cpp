#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        ll n,aa,b;
        cin>>n>>aa>>b;
        n++;
        vector<int> a(n);
        a[0]=0;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
        }
        vector<long long> sufsum(n);
        sufsum[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
           sufsum[i]=sufsum[i+1]+(a[i+1]-a[i])*(n-(i+1));
        }
        long long ans=LONG_LONG_MAX;
        for(int i=0;i<n;i++)
        {
            long long cost=sufsum[i]*b;
            cost+=a[i]*aa+a[i]*b;
            ans=min(ans,cost);
        }
        cout<<ans<<endl;
    }
}