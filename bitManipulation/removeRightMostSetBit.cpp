#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    n = n & (n-1);
    cout << "Updated number: " << n << endl;
}