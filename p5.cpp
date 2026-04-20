#include <algorithm> 
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int mnm=0;mnm<t;mnm++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int div=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                div=i;
            }
        }
        if(div==0)
        div=1;
        int min=0;int max=0;
        for(int i=0;i<div;i++)
        {
            min=min+a[i];
            max=max+a[n-1-i];
        }
        cout<<(max-min)<<"\n";
    }
}