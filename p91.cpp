#include <bits/stdc++.h>
using namespace std;

int main() {

    int nn;
    cin >> nn;
    for (int tc = 0; tc < nn; ++tc) {
        unsigned long long int a,b;
        cin>>a>>b;
        unsigned long long int z=a+b;
        if(b%2==1)
        {
            if(a%2==0)
            {
            cout<<-1<<endl;
            }
            else
            {
                z=a*b+(unsigned long long int)1;
                cout<<z<<endl;
            }
        }
        else
        {
            unsigned long long int ep=1;
            unsigned long long int b1=0;
            
           if(a%2==1)
           {
             if((b/2)%2==1)
             {
                cout<<-1<<endl;
                continue;
             }
             while((b/2)%2==0)
            {
                b1=max(b1,b*a*ep/2+2);
                ep=ep*2;
                b=b/2;
            }
             
             cout<<b1<<endl;
           }
           else
           {
            b1=max(b1,b*a*ep/2+2);
               while((b/2)%2==0)
               {
                b1=max(b1,b*a*ep/2+2);
                ep=ep*2;
                b=b/2;
               }
               cout<<b1<<endl;
           }
        }
    }
    return 0;
}