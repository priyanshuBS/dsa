#include <iostream>
using namespace std;

void iterative_approch(int n, int a1, int a2) {
    int diff = a2 - a1;
    int ans = a1;
    for (int i=1; i<n; i++) {
        ans += diff;
    }
    cout << ans << "\n";
}

void efficient_approch(int n, int a1, int a2) {
    cout << a1 + (n-1) * (a2-a1) << "\n";
}

int main() {
    int n, a1, a2;
    cin >> n >> a1 >> a2;

    iterative_approch(n, a1, a2);
    efficient_approch(n, a1, a2);
}