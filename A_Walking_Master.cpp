#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int a ,b,c,d;
        cin >> a >> b >> c >> d;

        int steps =0 ;
        if((d-b) < 0){
            cout << -1 << endl ;
            continue;
        }
        steps+=(d-b);

        a+=(d-b);
        
        if((a-c) < 0 ){
            cout << -1 << endl ;

        }
        else{
           steps+=(a-c); 
           cout << steps << endl ;
        }
       



    }
} 