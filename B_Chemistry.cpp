#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k;
        string s ;
        cin >> s ;
        
       vector<int> cnt(26,0) ;
       for(int i = 0 ; i < n ; i++){
        cnt[s[i] - 'a']++ ;
       }

       int odds =0 ;

       for(int i=0 ; i<26 ; i++){
        if(cnt[i] >0 && cnt[i]%2!=0){
            odds++ ;
        }


       }

       
        if(k >= odds-1){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
      



    }
} 