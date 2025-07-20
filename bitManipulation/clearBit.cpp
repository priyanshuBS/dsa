#include <iostream>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    n = n & ~(1 << p);
    cout << "New number: " << n << endl;
}