#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0 && (n & (n-1)) == 0)
        cout << "Yes! it is power of 2.\n";
    else    
        cout << "No! it is not power of 2.\n";
}