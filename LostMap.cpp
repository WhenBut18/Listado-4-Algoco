#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct DSU {
    vector<int> p, sz;
    DSU(int n) {
        p.resize(n);
        sz.assign(n, 1);
        iota(p.begin(), p.end(), 0);
    }
    int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]);
    }
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        if (sz[a] < sz[b]) swap(a, b);
        p[b] = a;
        sz[a] += sz[b];
        return true;
    }
};

int main() {
    int n;
    cin >> n;
    vector<vector<ll>> d(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> d[i][j];

    vector<tuple<ll,int,int>> edges;
    edges.reserve((n*(n-1))/2);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            edges.push_back({d[i][j], i, j});

    sort(edges.begin(), edges.end());
    DSU uf(n);
    int added = 0;
    for (auto &[w, u, v] : edges) {
        if (uf.unite(u, v)) {
            cout << u + 1 << " " << v + 1 << "\n";
            added++;
            if (added == n - 1) break;
        }
    }
    return 0;
}
