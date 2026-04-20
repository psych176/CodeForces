#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nn;
    cin >> nn;
    for (int ii = 0; ii < nn; ii++)
    {
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        int mi;int ma;
        if(a2<a1 || b2<b1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
             mi=(min(a1,b1));
             ma=max(a1,b1);
             if(ma>(mi+1)*2)
             {
               cout<<"NO"<<endl;
                 continue;
             }
             mi=(min(a2-a1,b2-b1));
             ma=max(a2-a1,b2-b1);
             if(ma>(mi+1)*2)
             {
               cout<<"NO"<<endl;
                 continue;
             }
             cout<<"YES"<<endl;
        }
    }
}