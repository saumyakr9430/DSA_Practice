#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> arr(n);

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    vector<pair<pair<string, string>, string>> mp;

    for (int i = 0; i < m; i++) {
        string s, x;
        cin >> s >> x;

       
        if (!x.empty() && x.back() == ';') {
            x.pop_back();
        }

        for (int j = 0; j < n; j++) {
            if (x == arr[j].second) {
                mp.push_back({{s, x+';'} , "#" + arr[j].first});
            }
        }
    }

    // Output
    for (auto &it : mp) {
        cout << it.first.first << " " << it.first.second << " " << it.second << "\n";
    }

    return 0;
}
