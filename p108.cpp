#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

        int n;
        cin>>n;
        vector<int> a(n);
        long long x=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            x+=a[i];
            mx=max(mx,a[i]);
        }
        if(x%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(mx<=(x/2))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
}