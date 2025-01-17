#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
       
        string s ;
        cin >> s ;  
       
         int ones = 0;
        int zero = 0 ;

        for(int i = 0 ; i< s.size() ; i++){
            if(s[i] == '0'){
                ones++ ;
            }

            if(s[i] == '1'){
                zero++;
            }
        }
        

        

        if(ones == 0 || zero == 0 ){
            cout << (zero + ones) << endl ;
            
        }
        else if(ones ==  zero){
           cout <<  0 << endl ;
            
        }
        else{
            cout << abs(ones - zero) << endl ;
        }

 
    }
} 