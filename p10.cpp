#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a>b)
    {
        gcd(a-b,b);
    }
    else if(b>a)
    {
        gcd(a,b-a);
    }
    else
    {
       return a;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag=0; int ans=0;
    for(int i=0;i<(n-1);i++)
    {
        if(a[i]==0)
        {
            i++;
        }
        else{
            if(flag==0)
            {
                ans=a[i];
                flag++;
            }
        int t=gcd(a[i],a[i+1]);
        ans=gcd(ans,t);
        }
    }
    ans=ans*n;
    cout<<ans<<endl;
}