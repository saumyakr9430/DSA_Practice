#include <bits/stdc++.h>
using namespace std;


int computeMaxSum(vector<int> a) {
    
    if (a.size() == 1) {
        return a[0];
    }

    
    int original_sum = accumulate(a.begin(), a.end(), 0);

    
    vector<int> reversed_a = a;
    reverse(reversed_a.begin(), reversed_a.end());
    int reversed_sum = accumulate(reversed_a.begin(), reversed_a.end(), 0);

   
    vector<int> diff_original;
    for (int i = 1; i < a.size(); ++i) {
        diff_original.push_back(a[i] - a[i - 1]);
    }

   
    vector<int> diff_reversed;
    for (int i = 1; i < reversed_a.size(); ++i) {
        diff_reversed.push_back(reversed_a[i] - reversed_a[i - 1]);
    }

    
    int recursive_sum_original = computeMaxSum(diff_original);
    int recursive_sum_reversed = computeMaxSum(diff_reversed);

    
    return max({original_sum, reversed_sum, recursive_sum_original, recursive_sum_reversed});
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        
        cout << computeMaxSum(a) << endl;
    }

    return 0;
}