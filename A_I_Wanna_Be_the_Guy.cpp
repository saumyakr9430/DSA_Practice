#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    int a ; 
    cin >> a ;
    vector<int> v(a) ;
    for(int i = 0 ; i < a ; i++){
        cin >> v[i] ;
    }
    int b ;
    cin >> b ;
    vector<int> v1(b) ;
    for(int i = 0 ; i < b ; i++){
        cin >> v1[i] ;
    }
    
    map<int,int> mpp ;
    for(int i = 0 ; i < a ; i++){
        mpp[v[i]]++ ;
    }
    for(int i = 0 ; i < b ; i++){
        mpp[v1[i]]++ ;
    }

    if(mpp.size() == t){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;



    
} 