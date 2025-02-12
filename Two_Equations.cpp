#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        bool ans = false;
        for (long long i = 0; i <= a; i++) {
            long long x = i ;
            long long y = a-i ;
            if((x^y)== b){
                ans = true;
                break ;
            }
        }

        cout << (ans ? "Yes" : "No") << endl;
    }
    return 0;
}
