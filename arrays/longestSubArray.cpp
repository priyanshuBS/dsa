#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int maxLen = 0;

    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            int sum = 0;
            for (int k=i; k<=j; k++) {
                sum += arr[k];
            }

            if (sum == k) maxLen = max(maxLen, j-i+1);
        }
    }

    cout << "Length: " << maxLen << endl;
}