#include <bits/stdc++.h>
using namespace std;

int main() {

    
    
        int n ;
        cin >> n ;
        map<int,int> mp ;
        for(int i =1 ; i<=500 ; i++){
             int val = (i*(i+1))/2 ;
                mp[val] = 1 ;
        }

        if(mp[n] == 1){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }



    }
