#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ,k ;
        cin >> n >> k ;
        vector<int> arr(n) ;
        for(int i =0 ; i<n  ; i++){
            cin >> arr[i] ;
        }

        vector<int> val(n) ;

        for(int i =0 ; i<n  ; i++){
            
            if(arr[i] % k == 0){
                val[i] = 0 ;
                continue ;
            }
            int multi = (arr[i]/k) +1;
           
            
            val[i] = (multi*k) - arr[i] ;
        }

        cout << *min_element(val.begin(),val.end()) << endl ;



    }
} 