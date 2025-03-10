#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string first, second;
    cin>> first>>second;
    
    for (int i = 0; i<first.length();i++){
        first[i]=tolower(first[i]);
    }
    for (int i = 0; i<second.length();i++){
        second[i]=tolower(second[i]);
    }


    if ( first< second){
        cout<<-1<<endl;
    }else  if ( first> second){
        cout<<1<<endl;
    } else {
        cout<<0;
    }



    return 0;

}