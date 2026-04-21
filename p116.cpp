//Codeforces Round 630 (Div. 2) C. K-Complete Word
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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int z;
        if(k%2==1)
        {
            z=k/2+1;
        }
        else
        {
            z=k/2;
        }
        unordered_map<int,unordered_map<char,long long>> m;
        for(int i=0;i<n;i++)
        {
            int c=i%k;
            c++;
            if(c>z)
            {
                c=k-c+1;
                
            }
           m[c][s[i]]++;
        }
        long long freq=n/k;
        long long ans=0;
        for(int i=1;i<=z;i++)
        {
            long long mx=0;
             for(auto it: m[i])
             {
                mx=max(mx,it.second);
             }
            if(i==z && (k%2))
            {
                ans+=freq-mx;
            }
            else
            {ans+=freq*2-mx;}  
        }
        cout<<ans<<endl;
    }
}