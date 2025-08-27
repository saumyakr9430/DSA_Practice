#include <bits/stdc++.h>
using namespace std;

int main() {

   int n ; 
   cin >> n ; 
   vector<int> a(n);
   for(int i = 0 ; i < n ; i++) {
         cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<pair<int,int>> v;
    int cnt = 1 ;

    for(int i = 0 ; i < n - 1 ; i++){
        if(a[i] == a[i+1]){
            cnt++;
        } else {
            v.push_back({a[i], cnt});
            cnt = 1;
        }
    }

    v.push_back({a[n-1], cnt});
    
    

    sort(v.begin(),v.end()) ;
    int k = v.size();

    
    
    for(int i=k-1 ; i> 0 ; i--){
        int val = v[i].second;
        if(val == 0) continue;
        for(int j = i-1;j>=0 ; j--){
            int cal = max(0 , v[j].second - val);
            v[j].second = cal;

        }
    }

    int ans = 0;

  

    for(int i =0  ; i<k ; i++){
        ans+= v[i].second;
    }
    
    cout << ans << endl;


} 


