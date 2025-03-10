#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    for (int i= 0 ; i<n ; i++){
        string word;
        char beg,en;
        int med = 0;
        cin>>word;
        if (word.length()>10){
            beg = word[0];// palabra accedida a su perimra posicion
            en = word[word.length()-1];
            med = word.length()-2;
            cout<<beg<<med<<en<<endl;
        }
        else {
            cout<<word<<endl;
        }
        
    }

    return 0;
}