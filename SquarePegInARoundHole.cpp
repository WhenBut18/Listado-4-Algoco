#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m, k, max = 0;
    float aux;
    cin >> n >> m >> k;
    vector<ll> terrenos(n);
    vector<float> casaB(m+k);
    for (int i = 0; i < n; i++){
        cin >> terrenos[i];
    }
    for (int i = 0; i < m; i++){
        cin >> casaB[i];
    }
    for (int i = m; i < m+k; i++){
        cin >> aux;
        aux = (sqrt(pow(aux,2)+pow(aux,2)))/2;
        casaB[i] = aux;
    }
    sort(terrenos.begin(),terrenos.end());
    sort(casaB.rbegin(),casaB.rend());
    for (auto t : terrenos){
        while (casaB.size()){
            if (t > casaB.back()){
                casaB.pop_back();
                max++;
                break;
            } else {
                break;
            }
        }
    }
    cout << max;
    return 0;
}