
#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    cin>>s;
    unordered_set<char> conj; 

    for (auto &e : s){

        conj.insert(e);

    }

    if (conj.size()%2 == 0){
        cout<< "CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;

}