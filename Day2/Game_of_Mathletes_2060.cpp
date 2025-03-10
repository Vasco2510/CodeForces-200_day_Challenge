#include <bits/stdc++.h>

using namespace std;

void execute(vector<int> &opciones, int &a, int &b, int k, int &score) {
    for (auto it = opciones.begin(); it != opciones.end(); ++it) {
        if (find(opciones.begin(), opciones.end(), k - *it) == opciones.end()) {
            a = *it;
            opciones.erase(it);
            break;
        }
    }

    int objetive = k - a;
    auto it = find(opciones.begin(), opciones.end(), objetive);
    
    if (it != opciones.end()) {  
        b = *it;
        opciones.erase(it);
        score++;
    } else { 
        b = opciones.back();
        opciones.pop_back();
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {  // Iterate over test cases
        int score = 0;
        int n, k;
        cin >> n >> k;
        
        vector<int> opciones(n);
        for (int i = 0; i < n; i++) {
            cin >> opciones[i];
        }
        
        for (int j = 0; j < n / 2; j++) {
            int a = 0, b = 0;
            execute(opciones, a, b, k, score);
        }
        
        cout << score << endl;
    }

    return 0;
}
