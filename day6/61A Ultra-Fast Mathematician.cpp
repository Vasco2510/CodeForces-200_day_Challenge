
#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string f, s;
    cin >> f >> s;

    int tam = f.length();
    string r(tam, '0'); 

    for (int i = 0; i < tam; i++) { 
        if (f[i] == s[i]) {
            r[i] = '0';
        } else {
            r[i] = '1';
        }
    }
    cout << r << endl;

return 0;
}