#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 200005;
vector<int> g[N];
ll a[N], sz[N], dp[N], ans[N];
int depth[N], tin[N], tout[N], euler[N];
int n, timer;

void dfs(int u, int p) {
    tin[u] = timer;
    euler[timer++] = u;

    sz[u] = a[u];
    dp[u] = 1LL * a[u] * depth[u];

    for (int v : g[u]) {
        if (v == p) continue;
        depth[v] = depth[u] + 1;
        dfs(v, u);
        sz[u] += sz[v];
        dp[u] += dp[v];
    }

    tout[u] = timer - 1;
}

struct SegTree {
    int n;
    vector<pair<int,int>> st; // {maxDepth, node}

    SegTree(int n) : n(n) {
        st.assign(4*n, {-1, -1});
    }

    void build(int p, int l, int r) {
        if (l == r) {
            int u = euler[l];
            st[p] = {depth[u], u};
            return;
        }
        int m = (l + r) >> 1;
        build(p<<1, l, m);
        build(p<<1|1, m+1, r);
        st[p] = max(st[p<<1], st[p<<1|1]);
    }

    pair<int,int> query(int p, int l, int r, int i, int j) {
        if (i > r || j < l) return {-1, -1};
        if (l >= i && r <= j) return st[p];
        int m = (l + r) >> 1;
        return max(query(p<<1, l, m, i, j),
                   query(p<<1|1, m+1, r, i, j));
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            g[i].clear();
        }

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        timer = 0;
        depth[1] = 0;
        dfs(1, 0);

        SegTree seg(n);
        seg.build(1, 0, n - 1);

        for (int r = 1; r <= n; r++) {
            ll base = dp[r] - 1LL * depth[r] * sz[r];
            ll best_gain = 0;

            for (int i = tin[r]; i <= tout[r]; i++) {
                int u = euler[i];
                if (u == r) continue;

                auto left = (tin[r] <= tin[u] - 1) ?
                    seg.query(1, 0, n - 1, tin[r], tin[u] - 1) :
                    make_pair(-1, -1);

                auto right = (tout[u] + 1 <= tout[r]) ?
                    seg.query(1, 0, n - 1, tout[u] + 1, tout[r]) :
                    make_pair(-1, -1);

                int bestDepth = max(left.first, right.first);
                if (bestDepth < 0) continue;

                ll gain = sz[u] * (bestDepth + 1 - depth[u]);
                best_gain = max(best_gain, gain);
            }

            ans[r] = base + best_gain;
        }

        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}