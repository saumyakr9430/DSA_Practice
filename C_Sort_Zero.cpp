#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        map<int,int> mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[a[i]]++;
        }
     
        int ans = 0 ; 
        int i = n-1 ; 
        
        while(i>=0 ){

           while(a[i] == a[i-1]){
            mpp[a[i]]--;
            i--;
           }

           mpp[a[i]]--;

           if(mpp[a[i]] == 0){
               mpp.erase(a[i]);
           }

           if(mpp.count(a[i]) || ( a[i-1]>a[i])){
            break;
           }
            i--;
            
           }
        

        ans = mpp.size();
        if(a.size() == 1){
            ans = 0;
        }
 

        cout << ans << endl;


    }
}