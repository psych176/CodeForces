#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                t++;
            }
            if(t>=2)
            {
            s++;
            break;
            }
        }
        t=0;
    }
    cout<<s<<endl;
}