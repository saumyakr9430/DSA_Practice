#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n);
        vector<int> b(n) ;

        for(int i =0 ; i<n ; i++){
            cin >> a[i];
         
            
        } 
        for(int i =0 ; i<n ; i++){
            cin >> b[i] ;
        }



       for(int i =0 ; i<n-1; i++){

        
        int val= a[i] - b[i+1];
        a[i] = val ;


        
       }

     
        int ans = 0 ;
        for(int i =0 ; i<n ; i++){
            if(a[i] >= 0){
              ans += a[i];
            }

        }

       
       

         cout << ans << endl ;


    }
} 