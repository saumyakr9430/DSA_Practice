#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> arr(n);
        for(int i =0 ; i<n  ; i++){
            cin >>arr[i];
        }
       
       bool ans = true;
       for(int i=0 ; i<n ; i++){
        if(arr[i] <= (2*(n-i-1)) || arr[i] <= (i*2)){
            ans = false;
            break;
        }
       } 
      
       if(ans){
           cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


       

    }
} 