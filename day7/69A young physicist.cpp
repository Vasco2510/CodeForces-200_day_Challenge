#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=0;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(3)); //pre - size gives you more efficiency


    for (int i =0 ; i<n ; i++ ){
        
        for (int j =0 ; j<3 ; j++){
            int num = 0;
            cin>>num;
            v[i][j] = num;
        }

    }
    // proces the vector

    int ctr=0;
    for ( int j= 0 ; j<3 ; j++ ){
        int sum = 0;
        for ( int i = 0 ; i<n; i++){
            sum += v[i][j];
        }
        if (sum == 0){
            ctr++;
        }
        
    }
    if (ctr == 3){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }





    
    return 0;
}