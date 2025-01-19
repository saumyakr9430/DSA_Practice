#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 0 ;
    cin >> t ;
    while(t--){
        int n, m;
        cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

   
    for (int i = 0; i < n; i++) {
        sort(arr[i].begin(), arr[i].end());
    }

    
    vector<vector<int>> transposed(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposed[j][i] = arr[i][j];
        }
    }

   
    for (int i = 0; i < m; i++) {
        sort(transposed[i].begin(), transposed[i].end());
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = transposed[j][i];
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
}

}


    
    
        

     
     

        




    


       



    
