#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n , m;
        cin >> n >> m ;
        vector<int> x(n) ;
        vector<int> y(n) ;
        for(int i =0 ; i<n ; i++){
            cin >> x[i] >> y[i] ;
            
        }

       for(int i =1; i<n ; i++){
           x[i] = x[i] + x[i-1] ;
           y[i] = y[i] + y[i-1]  ;
         
    }


    vector<int> x1 = x ;
    vector<int> y1 = y ;

    

    for(int i=0 ; i<n ; i++){
        x1[i] = x1[i]+m;
        y1[i] = y1[i]+m ;

    }

   
     for(int i =0 ; i<n-1 ; i++){
        x1[i] = x1[i] - x[i+1] ;
        y1[i] = y1[i] - y[i+1] ;

     }
   
    
    int sub  =0 ;
    for(int i=0 ; i<n-1 ; i++){
        sub += x1[i]+y1[i];
    }

    int area = n*(4*m);

    cout << (area -(2*sub)) << endl;
    
    }
} 