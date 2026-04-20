#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nn;
    cin >> nn;
    for (int ii = 0; ii < nn; ii++)
    {
        int n;
        cin >> n;
        int a[n];
        int nums[101] = {0};
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (nums[a[i]] != 0)
            {
                flag = false; // duplicate found
            }
            nums[a[i]]++;
        }

        if (!flag)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}