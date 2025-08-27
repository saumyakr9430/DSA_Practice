#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<long long, long long>> arr(n); // use long long for duration and deadline
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    // Sort by duration (or any order is fine if not specified, but shortest duration gives better prefix sums)
    sort(arr.begin(), arr.end());

    long long curr_time = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        curr_time += arr[i].first;  // accumulate finishing time
        ans += arr[i].second - curr_time; // reward = deadline - finish time
    }

    cout << ans << endl;
    return 0;
}
