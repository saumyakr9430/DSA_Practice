#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        vector<long long> arr(n);
        for(int i=0 ; i<n ; i++){
            cin >> arr[i] ;
        }

    map<long long,long long > mpp ;

    for(int i=0 ; i<n ; i++){
        mpp[arr[i]- i]++;
     }

     long long ans = 0 ;
     
     for(auto it : mpp){

        long long val = it.second ;

       ans += (((val)*(val-1))/2) ;

     }
    cout << ans <<  endl ;

    }
} 