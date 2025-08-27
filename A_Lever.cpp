#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0 ; i < n ; i ++){
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; i ++){
            cin >> b[i];
        }
        
        int incr = 0 ; 
        for(int i =0 ; i<n ; i++){
            if(a[i] > b[i]){
                incr+=(a[i]-b[i]);
            }
        }
        

        cout << incr+1 << endl;


    }
} 