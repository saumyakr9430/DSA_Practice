#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> arr(n);
        string ans = "YES";
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        for(int i =0 ; i<n-1; i++){
            int val = arr[i];
            arr[i] = arr[i] - val ;
            arr[i+1] = arr[i+1] -val ;
            if(arr[i] < 0 || arr[i+1] < 0){
                
              ans = "NO";
            }

        }
           cout << ans << endl ;

    }
} 