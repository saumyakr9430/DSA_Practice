#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 0;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long ans = 0;

for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        
        for (long long i = 0; i < n; i++) {
            for (long long j = i + 1; j < n; j++) {
                
                if ((i + j == arr[i] * arr[j])) {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
