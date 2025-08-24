#include <iostream>
using namespace std;

void naive_approch(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum += i;
    }
    cout << sum << "\n";
}

void another_approch(int n, int sum = 0) {
    if (n == 0) {
        cout << sum << "\n";
        return;
    }
    sum += n;
    another_approch(n-1, sum);
}

void efficient_approch(int n) {
    cout << (n*(n+1))/2 << "\n";
}

int main() {
    int n;
    cin >> n;

    naive_approch(n);
    another_approch(n);
    efficient_approch(n);

    return 0;
}