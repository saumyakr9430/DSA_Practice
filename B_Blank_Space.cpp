#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> arr(n);
        for(int i =0 ; i<n ; i++){
            cin >> arr[i] ;
        }

        int ans =0 ;
        int finalans = 0 ;
        for(int i=0 ; i<n ; i++){
            if(arr[i]== 0){
                ans ++ ;
            }
            else{
               
                ans = 0 ;
            }
             finalans = max(finalans , ans) ;
        }

        cout << finalans <<  endl ;



    }
} 