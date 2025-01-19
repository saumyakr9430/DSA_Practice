#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int a1,a2,a4,a5;
        cin >> a1 >> a2 >> a4>> a5;
        
        int one = a1 + a2 ;
        int second = a4 -a2 ;
        int third  = a5-a4 ;
        
        map<int,int> mpp ;
        mpp[one]++;
        mpp[second]++;
        mpp[third]++ ;

        int cnt  =0 ;

        for(auto it : mpp){
            cnt = max(cnt , it.second);

        }
        

        


        cout << cnt <<  endl ;


    }
} 