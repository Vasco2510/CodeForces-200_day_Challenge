#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin>>n;

    vector <int> a(n);
    for( auto &e : a) cin>>e;

    int m ; 
    cin>> m ;
    vector <string> s(m);
    while(m--) {
        string s; 
        cin>>s; 
        if (s.size() != n){
            cout << "NO\n";
            continue;
        }
        

        unordered_map <int, char> int_to_;
        unordered_map <char, int> char_to_;
        bool valid = true; 
        for ( int i = 0 ; i < n ; i ++){
            if ( int_to_.count(a[i]) && int_to_[a[i]] != s[i]){
                valid = false;
                break;
            }
            if ( char_to_.count(s[i]) && char_to_[s[i]] != a[i]){
                valid = false;
                break;
            }

            int_to_[a[i]]=s[i];
            char_to_[s[i]]=a[i];

        }
        cout<< (valid ? "YES" : "NO");
    }
        
};




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
