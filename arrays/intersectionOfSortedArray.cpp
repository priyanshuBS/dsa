#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int a[n1];
    int b[n2];

    for (int i=0; i<n1; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n2; i++) {
        cin >> b[i];
    }

    int i = 0;
    int j = 0;

    vector<int> result;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            result.push_back(a[i]);
            i++;
            j++;
        }
    }

    for (int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << "\n";
}