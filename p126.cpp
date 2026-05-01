#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Function to calculate GCD
// Note: std::gcd is available in <numeric> since C++17
// For older versions, you can use __gcd(a, b) from <algorithm>
long long get_gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> a(n);
    int ones_count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            ones_count++;
        }
    }

    // Case 1: If there are already 1s in the array
    if (ones_count > 0) {
        cout << n - ones_count << endl;
        return;
    }

    // Case 2: No 1s, find the shortest subarray with GCD = 1
    int min_len = 1e9; // Initialize with a large value

    for (int i = 0; i < n; ++i) {
        long long current_gcd = a[i];
        for (int j = i + 1; j < n; ++j) {
            current_gcd = get_gcd(current_gcd, a[j]);
            if (current_gcd == 1) {
                min_len = min(min_len, j - i + 1);
                break; // Smallest length for this starting index found
            }
        }
    }

    // Case 3: No subarray has a GCD of 1
    if (min_len == 1e9) {
        cout << -1 << endl;
    } else {
        // (min_len - 1) operations to get the first 1
        // (n - 1) operations to spread that 1 to every other element
        cout << (min_len - 1) + (n - 1) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}