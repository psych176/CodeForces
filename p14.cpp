#include <iostream>
using namespace std;
int main()
{
    int y;
    cin>>y;
    while(1)
    {
        y++;
        int t=y;
        int t1=t%10;
        t=t/10;
        int t2=t%10;
        t=t/10;
        int t3=t%10;
        t=t/10;
        int t4=t%10;
        t=t/10;
        if(t1!=t2 && t1!=t3 && t1!=t4 && t2!=t3 && t2!=t4 && t3!=t4)
        {
            cout<<y;
            break;
        }
    }
}