#include <iostream>

using namespace std;
int main()
{
    int nn;
    cin>>nn;

    for(int cc=0;cc<nn;cc++)
    {
        int n;int m;
        cin>>n>>m;
        if(n<m)
        {
            cout<<"No \n";
        }
        else
        {
            if((n-m)%2)
            {
                cout<<"NO \n";
            }
            else
            {
                 cout<<"Yes \n";
            }
        }
    }
}