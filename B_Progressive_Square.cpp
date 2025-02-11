#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n,c ,d ;
        cin >> n >> c >> d ;
        vector<int> arr(n*n);
        for(int i =0 ; i < n*n ; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<int> comp ;
        for(int i =0 ; i<n ;i++){
            for(int j =0 ; j<n ;j++){
                int val = arr[0] + (i*c)+(j*d);
                comp.push_back(val);
            }
        }

       
      

        sort(comp.begin(), comp.end());
       
        if(comp == arr){
            cout << "YES"<< endl;
        }else{
            cout << "NO" << endl;
        }




    }
} 