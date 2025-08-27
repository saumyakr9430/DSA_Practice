#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n);

        for(int i =0 ; i<n ; i = i+2){
            a[i] = -1 ;
        }
        for(int i =1 ; i<n ; i=i+2){
            int val  = abs(a[i-1])+1 ;
            if(i<n-1) val += abs(a[i+1]) ;
            a[i] = val ;
        }

        for(int i =0 ; i<n ; i++){
            cout << a[i] << " " ;
        }

        cout << endl;


    }
} 