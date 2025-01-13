#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        int val = 0 ; 
        for(int i =0 ; i<n  ;i++){
            if(arr[i] == -1 ){
                val--;
            }

            if(arr[i] == 1){
                val++ ;
            }
        }

        if(val >0) cout << 0 ;
        else{
            cout << abs(val);
        }

 


    }
} 