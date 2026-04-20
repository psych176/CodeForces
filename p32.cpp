#include <iostream>
using namespace std;
int main()
{
    int n,m;int n1;
    cin>>n>>m;
    n1=n;
    int a[m];int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    int max=0;
    int maxi=0;
    int min=a[0];
    int mini=0;
    int s=0;int s1=0;
    while(n!=0)
    {
        max=0;
        for(int i=0;i<m;i++)
        { 
          if(max<a[i]){
             max=a[i];
             maxi=i;
          }
        }
       a[maxi]--;
       s=s+max;
       n--;
    }
     while(n1!=0)
    {
        min=INT32_MAX;
        for(int i=0;i<m;i++)
        { 
          if(min>b[i] && b[i]!=0){
             min=b[i];
             mini=i;
          }
        }
       b[mini]--;
       s1=s1+min;
       n1--;
    }
    cout<<s<<" "<<s1;
}