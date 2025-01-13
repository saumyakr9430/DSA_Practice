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

        int pos =0 ; 
        int neg = 0 ; 

        for(int i=0 ; i<n  ;i++){
            if(arr[i] == -1){
                neg++;
            }
            else{
                pos++ ;
            }
        }

        int change = 0 ;

        while(neg%2!= 0 || (pos-neg) < 0){

            neg--;
            pos++;
            change++ ;
            

        }


   cout << change <<  endl ;
    
    
    
    
    }

       
} 