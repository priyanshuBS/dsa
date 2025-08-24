#include <iostream>
using namespace std;

void oppositeFaceOfDice(int n) {
    cout << 7 - n << "\n";
}

int main() {
    int n;
    cin >> n;

    oppositeFaceOfDice(n);
    return 0;
}