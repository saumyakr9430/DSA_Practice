#include <bits/stdc++.h>
using namespace std;
bool func(vec)
int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        
        int m = (n*(n-1))/2;
         vector<int> arr(m);
        for(int i =0 ; i<m ; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
     
        for(int i =0 ; i<m ; i += (--n)){
            cout << arr[i] << " ";
        }
        cout << arr[m-1] << endl;



    }
} 