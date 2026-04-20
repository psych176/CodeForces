#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nn;
    cin >> nn;
    for (int ii = 0; ii < nn; ii++)
    {
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int x=0;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        long long int c=0;int i=a.size()-2;
        c=max(a[i],a[i+1]);
        i=i-2;
        while(i>=0)
        {
            c=c+(long long int)max(a[i],a[i+1]);
            i=i-2;
        }
        if(i==-1)
        {
             c=c+(long long int)a[0];
        }
        cout<<c<<"\n";
    }
}