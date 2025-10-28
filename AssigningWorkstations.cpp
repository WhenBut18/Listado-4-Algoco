#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> cientificos(n);
    for (ll i = 0; i < n; i++) {
        cin >> cientificos[i].first >> cientificos[i].second;
    }
    sort(cientificos.begin(), cientificos.end());
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll ahorrado = 0;
    for (auto [a, s] : cientificos) {
        while (!pq.empty() && pq.top() + m < a)
            pq.pop();
        if (!pq.empty() && pq.top() <= a) {
            ahorrado++;
            pq.pop();
        }
        pq.push(a + s);
    }
    cout << ahorrado << "\n";
    return 0;
}
