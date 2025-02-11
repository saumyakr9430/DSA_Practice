#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int ans = 0;

       
        int prev = (s[0] == '0') ? 10 : (s[0] - '0');
        ans += abs(prev - 1);

        
        for (int i = 1; i < s.length(); i++) {
            int curr = (s[i] == '0') ? 10 : (s[i] - '0');
            ans += abs(curr - prev);
            prev = curr; 
        }

        
        ans += 4;

        cout << ans << endl;
    }
    return 0;
}