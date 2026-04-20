#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long modInverse(long long a, long long m) {
    long long m0 = m, x0 = 0, x1 = 1;
    while (a > 1) {
        long long q = a / m;
        long long t = m;
        m = a % m; a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

int main()
{
    int nn;
    cin >> nn;
    for (int ii = 0; ii < nn; ii++)
    {
        long long int n;long long int k;
        cin>>n>>k;
        long long int a[n];
        if(n==1)
        {
            long long int x;
            cin>>x;
            cout<<x+k<<"\n";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(k%2==1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==1)
                {
                    a[i]+=k;
                }
            }
        }
        else
        {
            long long int x=3;
            for(long long int i=3;i<k;i+=2)
            {
               if(k%i!=0)
               {x=i;
                break;}
               
            }
            long long invk = modInverse(k % x, x);

            for (int i = 0; i < n; i++) {
                long long rem = a[i] % x;
                if (rem != 0) {
                    long long need = (x - rem) % x;
                    long long s = (need * invk) % x;
                    a[i] += s * k;
                }
            }
        } 
         for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
    }
}