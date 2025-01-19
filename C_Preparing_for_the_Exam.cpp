#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> m1(m), k1(k);
        
        string s(m, '0'); 

        
        for (int i = 0; i < m; i++) {
            cin >> m1[i];

        }

       
        for (int i = 0; i < k; i++) {
            cin >> k1[i];

            
        }
        

        if(n == k){
            for(int i =0 ; i<m ; i++){
                s[i] ='1';
                
            }
            cout << s << endl ;

            continue ;
        }

        else if(n-1 == k ){
            int cnt  =1 ;


            for(int i=0 ; i<k; i++){
                if(k1[i] == cnt){
                    cnt ++ ;
                }

            
        }

        for(int i =0 ; i<n ; i++){
            if(m1[i] == cnt){
                s[i] = '1';
            }
           
             
        }



 }
    
       
        cout << s << endl;
    }

}
