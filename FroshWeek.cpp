#include <bits/stdc++.h>
using namespace std;

int main(){
    int cantBreaks, cantPegas, max = 0, ind;
    cin >> cantPegas >> cantBreaks;
    vector<int> pegas(cantPegas), breaks(cantBreaks);
    for (int i = 0; i < cantPegas; i++){
        cin >> pegas[i];
    }
    sort(pegas.begin(),pegas.end());
    for (int i = 0; i < cantBreaks; i++){
        cin >> breaks[i];
    }
    sort(breaks.rbegin(),breaks.rend());
    for(auto p : pegas){
        while (breaks.size()){
            if (p <= breaks.back()){
                max++;
                breaks.pop_back();
                break;
            } else {
                breaks.pop_back();
            }
        }
    }
    cout << max;
    return 0;
}
