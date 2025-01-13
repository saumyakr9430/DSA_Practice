#include <bits/stdc++.h>
using namespace std;


int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> arr(n);
     
        for(int i =0; i<n ; i++){
            
            cin >> arr[i] ;
        }

        int ans =0 ;
        
        for(int i = 0 ; i<n-1 ; i++){
            if(2*min(arr[i] ,arr[i+1]) > max(arr[i],arr[i+1])){
                ans++;
            }
        }

       if(ans > 0){
        cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
      



    }
} 