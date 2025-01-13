#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        long long n, k,x;
        cin >> n >> k >> x ;
        long long max =0 ;
        long long min = 0;

        min = (k*(k+1))/2 ;

        long long sub = ((k-1)*k)/2;
        max = (n*k) - sub ;

        
        if(x >= min && x <= max){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        



    }
} 