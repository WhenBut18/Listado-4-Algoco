#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,d,n,max = 0, inicio = 6, fin;
    cin >> l >> d >> n;
    fin = l - 6;
    vector<int> pajaros;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        pajaros.push_back(aux);
    }
    sort(pajaros.begin(), pajaros.end());
    for(auto p : pajaros){
        max += ((p-inicio)/d)-1;
        inicio = p;
    }
    max += (fin-inicio)/d + 1;
    cout << max;
    return 0;
}