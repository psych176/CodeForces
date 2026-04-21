//Codeforces Round 703 (Div. 2) B. Eastern Exhibition
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
        int n;
        cin>>n;
        vector<ll> x(n);
        vector<ll> y(n);
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        if(n%2==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        int ind=n/2;
        ll ans=(x[ind]-x[ind-1]+1LL)*(y[ind]-y[ind-1]+1LL);
        cout<<ans<<endl;
    }
}