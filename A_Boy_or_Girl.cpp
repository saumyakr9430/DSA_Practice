#include <bits/stdc++.h>
using namespace std;

int main() {
        string s ;
        cin >> s ;
        map<char,int> mpp ;
        for(int i =0  ; i<s.size() ; i++){
            mpp[s[i]]++ ;
        }
        int size = mpp.size() ;
        if(size%2 == 0){
            cout << "CHAT WITH HER!" << endl;}
        else{
            cout << "IGNORE HIM!" << endl;
        }


    
} 