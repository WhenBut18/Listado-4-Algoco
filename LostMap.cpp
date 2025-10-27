#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m, a, s;
    cin >> n >> m;
    vector<pair<ll,ll>> cientificos(n);
    for (ll i = 0; i < n; i++){
        cin >> a >> s;
        cientificos[i] = {a,s};
    }
    sort(cientificos.begin(), cientificos.end());
    for(auto c : cientificos){
        
    }
    return 0;
}