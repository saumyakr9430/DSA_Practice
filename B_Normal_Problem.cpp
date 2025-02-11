#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        int n = s.size() ;
        for(int i =0 ; i<n ; i++){

            if(s[i] == 'p'){
                s[i]= 'q';
            }
            else if(s[i] == 'q'){
                s[i]= 'p';
            }
        }

        reverse(s.begin(),s.end()) ;
        cout << s << endl ;



    }
} 