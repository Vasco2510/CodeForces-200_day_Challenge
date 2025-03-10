#include <bits/stdc++.h>

using namespace std;

void execute(int & a , int & b,int & n, int & k, int &score ){
    vector<int> opciones;
    for (int i=0 ; i<n; i++){
        int e;
        cin>>e;
        opciones.emplace_back(e);
    }
    unordered_set<int> banned;
    for (int i = 0 ; i<opciones.size();i++){
        banned.insert(k-opciones[i]);
    }
    // elegir el primer elemento del vector, que no este dentro del 
    bool found = false;

    for( int i = 0; i< opciones.size(); i++){
        if(banned.find(opciones[i])== banned.end()){
            a = opciones[i];
            found = true;
            opciones.erase(opciones.begin()+i); //Erase recibe un iterador
            break;
        }
        if ( !found && !opciones.empty()){
            a = opciones[0];
            opciones.erase(opciones.begin());
        }
    }
    // bob elige
    int objetive = k-a;
    for(int i = 0 ; i < opciones.size(); i++){
        if (opciones.find(opciones.begin(), opciones.end(), objetive) != opciones.end() ){
            b= objetive;
            opciones.erase(opciones.begin()+i);
            score++;
            break;
        }
    }

    
}



int main (){
    int t;
    cin>>t;
    for (int i=0; i < t; i++){// pruebas
        int score = 0;

        int n, k;
        cin>> n>>k;
        for (int j = 0; j< n/2; j++){
            int a = 0;
            int b = 0;
            execute(a, b,  n,  k,  score);
        }
        cout<<score<<endl;

    }

    return 0;
}
