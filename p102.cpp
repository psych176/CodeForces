#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, int>> rounds(n);
    map<string, int> finalScore;
    for (int i = 0; i < n; i++) {
        cin >> rounds[i].first >> rounds[i].second;
        finalScore[rounds[i].first] += rounds[i].second;
    }
    int mx = INT_MIN;
    for (auto &p : finalScore) {
        mx = max(mx, p.second);
    }
    map<string, int> running;

    for (int i = 0; i < n; i++) {
        string name = rounds[i].first;
        int score = rounds[i].second;
        running[name] += score;
        if (running[name] >= mx && finalScore[name] == mx) {
            cout << name << endl;
            break;
        }
    }

    return 0;
}