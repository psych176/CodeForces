#include <iostream>

using namespace std;
int main()
{
    int nn;
    cin>>nn;

    for(int cc=0;cc<nn;cc++)
    {
    long long int mc=0;
    int n;int m;
    cin>>n>>m;
    int a[n];
    int b[n];
    m--;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=n-1;i>m;i--)
    {
        mc=mc+min(a[i],b[i]);
    }
    long long int tc=mc;
    long long int sum=0;
    for(int i=0;i<=m;i++)
    sum=sum+b[i];

    long long int min=sum+a[0];
    for(int i=0;i<=m;i++)
    {
        sum=sum-b[i]+a[i];
        if(min>sum)
        min=sum;
        sum=sum-a[i];
    }
    tc=tc+min;
    cout<<tc<<"\n";
    }

}