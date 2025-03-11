#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    
    
    // reversa al string s




    if ( s.length() != t.length()){
        cout<<"NO";
        return 0;
    }else{
        int tam = s.length();
        for ( int i = 0 ; i < tam ; i++){
            if (s[i] == t[tam-1-i]){
                continue;
            }
            else{
                cout<<"NO";
                return 0;
    
            }
        }
        cout<<"YES";

    }

    return 0;

}