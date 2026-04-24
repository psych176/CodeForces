//Divide by Zero 2018 and Codeforces Round 474 (Div. 1 + Div. 2, combined) B. Minimize the error
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        int n,k1,k2;
        cin>>n>>k1>>k2;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
           cin>>b[i];
        }
        priority_queue<ll> pq;
        for(int i=0;i<n;i++)
        {
            if((a[i]-b[i])!=0)
           pq.push(abs(a[i]-b[i]));
        }
        int x=k1+k2;
        

        while(x>0 && !pq.empty())
        {
            ll t1=pq.top();
            ll t3=t1;
            pq.pop();
            ll t2=1;
            if(!pq.empty())
            {t2=pq.top();}
            t1=t1-t2+1;
            if(x>=t1)
            {
                x-=t1;
                t1=t2-1;
                if(t1!=0)
                pq.push(t1);
            }
            else
            {
                t3=t3-x;
                x=0;
                pq.push(t3);
            }
        }
        long long ans=0;
        while(!pq.empty())
        {
            long long t1= pq.top();
            ans+=(t1*t1);
            pq.pop();
        }
        if(x%2==1)
        {
           ans++;
        } 
        cout<<ans<<endl;
}