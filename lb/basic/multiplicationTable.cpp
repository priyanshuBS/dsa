#include <iostream>
using namespace std;

void iterative_approch(int n) {
    for (int i=1; i<=10; i++) {
        cout << n << " * " << i << " = " << n * i << "\n";
    }
}

void recursive_approch(int n, int i = 1) {
    if (i == 11) return;
    cout << n << " * " << i << " = " << n * i << "\n";
    i++;
    recursive_approch(n, i);
}

int main() {
    int n;
    cin >> n;
    iterative_approch(n);
    cout << endl;
    recursive_approch(n);
}