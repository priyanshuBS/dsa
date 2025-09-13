#include <bits/stdc++.h>
using namespace std;

bool areDisjoint(vector<int> &a, vector<int> &b) {
    unordered_set<int> s;

    for (int &el: a) {
        s.insert(el);
    }
    for (int &el: b) {
        if (s.find(el) != s.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<m; i++) {
        cin >> b[i];
    }
    bool result = areDisjoint(a, b);
    if (result) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}