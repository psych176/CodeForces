#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main()
{
    int n;
    cin>>n;
    int z=0;int i=0;int t=0;double t1=0;
    if(n<=9)
    {
        if(n>4 && n<9)
        n=9-n;
        cout<<n;
        return 0;
    }
    while(n>9)
    {
        t=n%10;
        if(t>4)
        {
        t=9-t;
        }
        t1=(pow(10,i));
        t1=t1*t;
        z=z+t1;
        i++;
        n=n/10;
    }
    if(n>4 && n<9)
    {
        n=9-n;
    }
    t1=(pow(10,i));
    t=n*t1;
    z=z+t;
    cout<<z;
}