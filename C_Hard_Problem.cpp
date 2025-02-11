#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int m , a,b,c ;
        cin >> m >> a >> b >> c ;
        int ans =0 ;
        int total = 2*m ;
        if(a > m){
            ans += m;
        }
        else{
            ans += a ;
            
        }

        if(b > m){
            ans += m;
        }
        else{
            ans += b ;
            
        }

        int rem = total - ans ;
        if(c > rem){
            ans += rem ;
        }
        else{
            ans += c ;
            
        }


        cout << ans << endl ;




    }
} 