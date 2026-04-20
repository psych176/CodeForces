#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max=a[0];int min=a[0];int t1=0;int t2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            t1=1;
            max=a[i];
        }
        else if(a[i]==max)
        {
            t1++;
        }
       if(a[i]<min)
        {
            t2=1;
            min=a[i];
        }
       else if(a[i]==min)
       {
        t2++;
       }
    }
    long long int t=(long long int)t1*(long long int)t2;
    long long int f=(long long int)n*(long long int)(n-1)/2;
    if(max==min)
    cout<<0<<" "<<f;
    else
    cout<<max-min<<" "<<t;

}