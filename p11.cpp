#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i1=0;int j=0;int z=0;int t1,t2,t3;
    for(int i=0;i<n;i++)
    {
        cin>>t1>>t2>>t3;
        i1=i1+t1;
        j=j+t2;
        z=z+t3;
    }
    if(i1==0 && j==0 && z==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}