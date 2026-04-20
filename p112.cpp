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
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sum+=b[i];
        }
        vector<long long> pre(n);
        vector<long long> da(n,0);
        vector<long long> rem(n,0);
        pre[0]=b[0];
        for(int i=1;i<n;i++)
        {
           pre[i]=pre[i-1]+b[i];
        }
        for(int i=0;i<n;i++)
        {
            long long t;
            i==0? t=sum : t=sum-pre[i-1];
            if(a[i]>=t)
            {
                da[i]++;
            }
            else
            {
                if(a[i]<=b[i])
                {
                     rem[i]+=(long long)a[i];
                }
                else
                {
                    int bs=-1;
                    int l=i;
                    int h=n-1;
                    long long t1 = (i == 0) ? 0 : pre[i - 1];
                    while(l<=h)
                    {
                        int mid=l+(h-l)/2;
                        if((pre[mid]-t1)>=a[i])
                        {
                            bs=mid;
                            h=mid-1;
                        }
                        else
                        {
                            
                            l=mid+1;
                        }
                    }
                    da[i]++;
                    da[bs]--;
                    long long t2 = (bs == 0) ? 0 : (pre[bs - 1] - t1);
                    rem[bs]+=a[i] -t2;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
           da[i]+=da[i-1];
        }
         for(int i=0;i<n-1;i++)
        {
           da[i]*=b[i];
           da[i]+=rem[i];
           cout<<da[i]<<" ";
        }
        int i=n-1;
        da[i]*=b[i];
           da[i]+=rem[i];
           cout<<da[i];
        cout<<endl;
    }
}