#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    while (casos--){
        int largo, canthormigas, minimo = 0, maximo = 0;
        cin >> largo >> canthormigas;
        vector<int> posiciones(canthormigas);
        for(int i = 0; i < canthormigas; i++){
            cin >> posiciones[i];
        }
        for(auto p : posiciones){
            maximo = max(maximo, max(p, largo-p));
            minimo = max(minimo, min(p, largo-p));
        }
        cout << minimo << " " << maximo << endl;
    }
    
    
}
