#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int mnm=0;mnm<t;mnm++)
    {
        int n;int x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max=(x-a[n-1])*2;
        if(a[0]>max)
        max=a[0];
        for(int i=1;i<n;i++)
        {
            int p=a[i]-a[i-1];
            if(p>max)
            {
                max=p;
            }
        }
        cout<<max<<endl;
    }
}