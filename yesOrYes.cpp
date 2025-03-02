#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    int size = 3;
    vector<string> results;

    for (int i=0; i<t; i++){
        string word;
        char e;
        cin>>word;
        for (auto &e : word){
            e = tolower(e);
        }
        bool isYes = false;
        if (word == "yes"){
            isYes = true;
        }
        results.push_back((isYes) ? "YES" : "NO");
    }
    for (auto &e : results){
        cout<<e<<endl;
    }
    return 0;

}