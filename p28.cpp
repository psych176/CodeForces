#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
              if((i+j)%2==1)
              {
                 a[i][j]='W';
              }
              else
              a[i][j]='B';
            }
            cout<<a[i][j];
        }
         cout<<endl;
    }
}