#include <bits/stdc++.h>
using namespace std;

int main() {

    
    
        int n ,m;
        cin >> n >> m ;

       vector<int> v ;

       for(int i =2 ; i<=50 ; i++ ){
         bool ans = true ;
         for(int  j=2 ; j<n ; j++){
            if(j != i && i%j==0){
                 ans = false ;
                 break ;
            }

         }

         if(ans){
            v.push_back(i); ;
        }

       }


       for(int i =0 ; i<v.size() ; i++){
        if(v[i] == n && v[i+1] == m){
            cout << "YES" << endl;
            return 0 ; 
            
        }
        
       }
       cout << "NO" << endl;



       
 


    
} 