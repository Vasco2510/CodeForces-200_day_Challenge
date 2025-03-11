
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;

    cin>>n>>s;

    bool valid = false; 
    if (s.length()>1){
        valid = true;
    }
    
    if (n>50 || n<1){
        cout <<"\n out of its limits";
        return 0;
    }
   // int tam = s.length();
    int ctr=0;
    for (int i = 0; i< s.length()-1 ;){

        if (s[i] == s[i+1]){
            s.erase(i+1,1); // verify if you can doit 
            ctr++;

        }
        else {
            i++; // asi solo avanzo si no se elimina
        }

    }

    cout<<ctr<<endl;

    
    return 0;

}
