#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = (a[i] % k) ;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            b[i] = (b[i] % k);
        }

        unordered_map<int, int> freq;
        for (int x : b) freq[x]++;

        bool ans = true;
        for (int i = 0; i < n; i++) {
            int val = a[i];
            int val2 = k - val;

            if (freq[val] > 0) {
                freq[val]--;
            } 
            else if (freq[val2] > 0) {
                freq[val2]--;
            } 
            else {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES\n" : "NO\n");
    }
}
