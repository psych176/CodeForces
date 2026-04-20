#include <iostream>
using namespace std;
int main()
{
    int m,n,a;
    cin>>m>>n>>a;
    if(a!=0)
    {
    long long int b1,b2;
    if(m%a==0)
    b1=m/a;
    else
    b1=m/a+1;
    if(n%a==0)
    b2=n/a;
    else
    b2=n/a+1;
    long long int b=b1*b2;
    cout<<b;
    }
    else
    {
        return -1;
    }
}