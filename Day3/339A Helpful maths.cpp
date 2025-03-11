
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string s; 

    cin>>s;
    if (s.length()>100){
        cout<<"\nString is too long";
        return 0;
    }
    vector<int> numbers;
    //exclur las partes impartes y poner todo en un vector
    for(int i = 0; i<s.length();i++){
        if (i % 2 ==0){
            numbers.emplace_back(s[i]-'0');
        }
    }

    sort(numbers.begin(), numbers.end()); // verfuca is esto esta bien en el momento de verificacion

    for(int i=0 ; i<numbers.size()-1; i++){
        cout<<numbers[i]<<"+";
    }
    cout<<numbers.back();


    return 0;

}