#include <bits/stdc++.h>

using namespace std;

int m, n, a, large_units, width_units;

void solution1();
void solution2();


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solution1();
    // solution2();


    return 0;   
}

void solution1(){
    cin>>n>>m>>a;

    if (m % a == 0){ // using true here would be faster rigth?
        large_units = m/a;
    } else {
        large_units = (m+a -1) / a; //ceil m/a

    }

    if (n % a == 0){ // using true here would be faster rigth?
        width_units = n/a;
    } else {
        width_units = (n+a -1) / a; //ceil m/a
    }
    int total_units= large_units * width_units;
    cout<<total_units;
}

void solution2(){
    cin>>n>>m>>a;

    int height = (m + a -1 )/ a;
    int widht = (n +a -1) / a;
    cout<<height*widht;
}