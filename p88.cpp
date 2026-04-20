#include <bits/stdc++.h>
using namespace std;

int main() {

    int nn;
    cin >> nn;
    for (int tc = 0; tc < nn; ++tc) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> dp(n+1, 0);
        vector<vector<int>> pos(n+1); // pos[v] = list of 1-based indices where value v appears

        for (int i = 0; i < n; ++i) {
            int v = a[i];
            dp[i+1] = dp[i];               // skip a[i]
            pos[v].push_back(i+1);         // record position (1-based)
            int m = (int)pos[v].size();
            if (m >= v) {
                int start = pos[v][m - v]; // 1-based index of block start
                dp[i+1] = max(dp[i+1], dp[start - 1] + v);
            }
        }

        cout << dp[n] << '\n'; // printed immediately after this test case
    }
    return 0;
}