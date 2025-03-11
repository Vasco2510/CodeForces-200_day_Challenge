#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=0;
    cin>>n;
    if (n<2 or n>1000){
        return 0;
    }
    int ai = 0, bi = 0;
    int sum = 0;
    int minimum = 0;

    for (int i= 0 ; i<n; i++ ){
        cin>> ai>>bi;
        sum += -ai + bi;
        minimum = max(minimum, sum);
        /* valid but i ll try sth different
        if (sum > minimum){
            minimum = sum;
        }
        */
    
    }

    cout<<minimum<<endl;

    return 0;

}