#include <iostream>
#include <vector>
using namespace std;

bool isPossible(const vector<int>& b) {
    
    if (b.size() == 1) return true;
    
    for (size_t i = 1; i < b.size(); i++) {
        if (b[i - 1] == 1 && b[i] == 0 && (i + 1 < b.size() && b[i + 1] == 1)) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 2);
        
        for (int i = 0; i < n - 2; i++) {
            cin >> b[i];
        }
        
        cout << (isPossible(b) ? "YES" : "NO") << endl;
    }
    
    return 0;
}
