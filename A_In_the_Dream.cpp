#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int a,b,c,d ;
        cin >> a >> b >> c >> d ;
        bool ans1 = true ; 
        if((2*min(a,b)+2) < max(a,b)) ans1  = false ;
       
        bool ans2 = true  ;
        int e = c-a ;
        int f = d-b ;
        
        if((2*min(e,f)+2) < max(e,f)) ans2  = false ;
        if(ans1 && ans2) cout << "YES\n" ;
        else cout << "NO\n" ;


    }
} 