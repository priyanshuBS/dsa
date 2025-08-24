#include <iostream>
using namespace std;

bool naive_approch(int n) {
    if (n % 2 == 0) {
        return true;
    }
    return false;
}

bool efficient_approch(int n) {
    if (n & 1) {
        return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    cout << naive_approch(n) << " " << efficient_approch(n) << "\n";

}