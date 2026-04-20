#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        int n;int m;
        cin>>n>>m;
        vector<int> a(n);
        int c=1;
        bool f=1;
        cin>>a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==a[i-1])
            {
                c++;
            }
            else
            {
                c=1;
            }
            if(c==m)
            f=0;
        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}