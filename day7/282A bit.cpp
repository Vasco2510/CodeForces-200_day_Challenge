#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n=0;
    cin>>n;
    string s ; 
    int x = 0;
    for (int j = 0 ; j<n ; j++){
        cin>>s;
        if ( s.find("++") != string::npos){
            x++;
        }else {
            x--;
        }
        
    }

    cout<<x<<endl;

    
    return 0; 
}