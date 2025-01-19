#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ,a,b,c;
        cin >> n >> a>> b >> c;
      
       
        int sum = a+b+c;
        int step = ((n/sum)*3) ;
        int rest = n%sum;

        if(rest > 0){
            rest = rest -a ;
            step++;
        }
        
        if(rest > 0){
            rest = rest -b ;
            step++;
        }
       
        if(rest > 0){
            rest = rest -c ;
            step++;
        }
      
        cout << step << endl;


    }
} 