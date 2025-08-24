#include <iostream>
using namespace std;

void naive_approch(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum += (i*i);
    }
    cout << sum << "\n";
}

void efficient_approch(int n) {
    cout << (n*(n+1)/2) * (2*n+1) / 3 << "\n";
}

int main() {
    int n;
    cin >> n;

    naive_approch(n);
    efficient_approch(n);

    return 0;
}