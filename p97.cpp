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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // 1. Create a sorted version of the array to identify misplaced elements
        vector<int> b = a;
        sort(b.begin(), b.end());

        // 2. If the array is already sorted, k is technically infinite (output -1)
        if (a == b) {
            cout << -1 << "\n";
            continue;
        }

        int b_min = b[0];
        int b_max = b[n - 1];

        // 3. Initialize k with the maximum possible spread
        int k = b_max - b_min;

        // 4. For every element not in its correct sorted position,
        // it must be able to swap with either the global min or global max.
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                // The element at a[i] must satisfy: |a[i] - b_min| >= k OR |a[i] - b_max| >= k
                int current_reach = max(abs(a[i] - b_min), abs(a[i] - b_max));
                k = min(k, current_reach);
            }
        }

        cout << k << "\n";
    }
}