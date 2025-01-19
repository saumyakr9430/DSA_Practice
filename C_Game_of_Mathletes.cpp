#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int remain = k - arr[i];

            
            if (mpp[arr[i]] > 0 && mpp[remain] > 0) {
                
                if (arr[i] == remain && mpp[arr[i]] < 2) {
                    continue;
                }

                
                mpp[arr[i]]--;
                mpp[remain]--;
                cnt++;
            }
        }

        cout << cnt << endl;
    }

}
