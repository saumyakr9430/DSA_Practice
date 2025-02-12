#include <bits/stdc++.h>
using namespace std;

int main() {

    
        int n ;
        cin >> n ;
        vector<vector<int>> arr(n, vector<int>(3, 0)) ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < 3 ; j++){
                cin >> arr[i][j] ;
            }
        }

        int ans =0 ;
        for(auto it : arr){
            int a = it[0] ;
            int b = it[1] ;
            int c = it[2] ;
            if(a+b+c >= 2){
                ans++ ;
            }
        }

        cout << ans << endl;





    }
 