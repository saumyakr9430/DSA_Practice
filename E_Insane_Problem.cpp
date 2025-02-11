#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        
        // Handle edge case where k is 1
        if (k == 1) {
            // All i / j will be 1 if i == j, so count pairs where i == j
            int cnt = 0;
            int lower = max(l1, l2);
            int upper = min(r1, r2);
            if (lower <= upper) {
                cnt = upper - lower + 1;
            }
            cout << cnt << '\n';
            continue;
        }

        // Precompute all powers of k within the valid range
        map<int, int> mp;
        long long power = 1;
        while (power <= 1e18) { // Adjust upper limit as needed
            mp[power] = 1;
            if (power > 1e18 / abs(k)) break; // Prevent overflow
            power *= k;
        }

        int cnt = 0;

        // Iterate over all powers of k
        for (auto& p : mp) {
            long long val = p.first; // Current power of k
            if (val == 0) continue; // Avoid division by zero

            // Find valid j such that val * j is in [l2, r2] and j is in [l1, r1]
            long long min_j = max((long long)l1, (l2 + val - 1) / val); // Ceiling of l2 / val
            long long max_j = min((long long)r1, r2 / val); // Floor of r2 / val

            if (min_j <= max_j) {
                cnt += max_j - min_j + 1;
            }
        }

        cout << cnt << '\n';
    }
}