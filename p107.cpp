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
        vector<int> a(n);
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            x^=a[i];
        }
        if(x==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int s=0;int si=0;
        int pi=0;
        int p=0;
        for(int i=0;i<n;i++)
        {
           s^=a[i];
           if(s==x)
           {si=i;
        break;}
           
        }
        for(int i=n-1;i>=0;i--)
        {
           p^=a[i];
           if(p==x)
           {pi=i;
            break;}
           
        }
        if(si<pi)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}