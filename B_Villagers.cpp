#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end(),greater<long long>());

        long long ans = 0;
        for(int i = 0; i < n; i += 2) {
          ans+=a[i];
        }

        cout << ans << "\n";
    }
}
