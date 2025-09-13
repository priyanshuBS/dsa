#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool isSubset(vector<int> &a, vector<int> &b) {

    multiset<int> hashSet(a.begin(), a.end());

    for (auto &num : b) {
        if (hashSet.find(num) == hashSet.end()) {
            return false;
        }
        hashSet.erase(hashSet.find(num));
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

    bool result = isSubset(a, b);
    if (result) {
        cout << "Yes.\n";
    } else {
        cout << "No.\n";
    }
}