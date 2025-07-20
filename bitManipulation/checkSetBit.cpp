#include <iostream>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    if ((n >> p) & 1) {
        cout << "Set bit\n";
    } else {
        cout << "Not set bit\n";
    }
}