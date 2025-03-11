#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n=0;
    cin>>n;
    long long sum = 0;

    
    sum = (n+1) / 2 * (n %2 == 0 ? 1 : -1);
    cout<<sum<<endl;

    return 0;

}