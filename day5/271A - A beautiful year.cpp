#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int yearI;
    cin>>yearI;

    unordered_map<int,char> password = {
        {0,'0'},
        {1, '1'},
        {2, '2'},
        { 3 , '3'},
        { 4, '4'},
        { 5, '5'},
        {6, '6'},
        {7, '7'},
        {8, '8'},
        {9, '9'}
    }; 
    // othe way to populate it 
    /*
        for ( int i = 0 ; i<=9; i++){
        password[i] = '0'+i;
    }
    */


    while (true){
        yearI++;
        int aux = yearI; 
        int first, sec, thir, four;
        // look for a way to measue how figures does your year have. by the momment we're fine yet.
        four = aux%10; 
        char d=password[four]; 

        aux/=10;

        thir = aux%10; 
        char c = password[thir];

        aux/=10;

        sec = aux%10;
        char b = password[sec];

        aux/=10;

        first = aux; 
        char a = password[first];
        if (a == b or a==c or a == d or
            b == c or b==d or
            c == d ){
                continue;
            }
        else{
            cout<<yearI<<endl;
            break; 
        }
        // converte the year to string and split in string.length() equivalent parts.

   

    }
    
    // would be intersting to find a recursive way to do this, sweeping one at a time.

    return 0;
}