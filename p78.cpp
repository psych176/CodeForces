#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        int a,b,k;
        cin>>a>>b>>k;
        if(k%2)
        {
            cout<<a<<" "<<b<<"\n";
            k--;
        }
        for(int i=0;i<k;i++)
        {
            if(i%2)
            cout<<a+1+(i/2)<<" "<<b<<"\n";
            else
            cout<<a-(i/2)-1<<" "<<b<<"\n";
        }
    }
}