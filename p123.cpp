//Educational Codeforces Round 58 (Rated for Div. 2) C. Division and Union
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
            vector<vector<int>> a(n,vector<int>(2));
            vector<vector<int>> b(n,vector<int>(2));
            for(int i=0;i<n;i++)
            {
                cin>>a[i][0]>>a[i][1];
            }
            b=a;
            sort(a.begin(),a.end());
            int r=a[0][1];
            int split=INT_MIN;
            for(int i=1;i<n;i++)
            {
                if(a[i][0]<=r)
                {
                  r=max(r,a[i][1]);
                }
                else
                {
                    split=a[i][0];
                    break;
                }
            }
            if(split==INT_MIN)
            cout<<-1<<endl;
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(b[i][1]<split)
                    cout<<1<<" ";
                    else
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
}