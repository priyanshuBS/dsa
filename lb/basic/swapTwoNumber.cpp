#include <iostream>
using namespace std;

void using_arithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << "\n";
}

void using_bitwiseXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << "\n";
}

int main() {
    int a, b;
    cin >> a >> b;
    using_arithmetic(a, b);
    using_bitwiseXOR(a, b);
}