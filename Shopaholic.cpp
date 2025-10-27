#include <bits/stdc++.h>
using namespace std;

int main(){
    long long cantItems, max = 0;
    cin >> cantItems;
    vector<long long> precios(cantItems);
    for (long long i = 0; i < cantItems; i++){
        cin >> precios[i];
    }
    sort(precios.rbegin(), precios.rend());
    while (precios.size()%3){
        precios.pop_back();
    }
    while (precios.size()){
        max += precios.back();
        precios.pop_back();
        precios.pop_back();
        precios.pop_back();
    }
    cout << max;
    return 0;
}