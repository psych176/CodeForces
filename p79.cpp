#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        int n,y;
        cin>>n>>y;
        long long s1=0;
        long long s2=0;
        long long count=0;
        for(int i=1;i<=y-2;i++)
        {
            for(int j=1;j<=y-2;j++)
            {
                for(int k=1;k<=y-2;k++)
                {
                    s1=(long long)i*k+(long long)i*j+(long long)j*k;
                    s2=i+k+j;
                    if(s1<=n && s2<=y)
                    count++;
                    else
                    break;
                }
            }
        }
        cout<<count<<"\n";
    }
}