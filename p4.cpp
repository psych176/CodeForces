#include <algorithm> 
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a<b)
    gcd(a,b-a);
    else if(a>b)
    gcd(a-b,b);
    else{
    return a;
    }
    
}
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
        int sum=0;int i=0;
        while(i!=(n-1))
        {
            int j=i+1;
            while(j!=n)
            {
                int g=0;
                if(a[j]%a[i]==0)
                g=a[i];
                else
                 g=gcd(a[i],a[j]);
                sum=sum+g*(n-1-j);
                j++;
            }
            i++;
        }
        cout<<sum<<"\n";
    }
}