#include <bits/stdc++.h>
using namespace std;

// here we use two pointer approch in circular fashion

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int l = 0, s = 0;

    for (int i=0; i<n-1; i++) {
        if (nums[i] > nums[i+1]) {
            l = i;
            s = i+1;
            break;
        }
    }

    while (l != s) {
        int sum = nums[l] + nums[s];

        if (sum == t) {
            cout << "found\n";
            return 0;
        } else if (sum > t) {
            l = (l-1+n) % n;
        } else {
            s = (s + 1) % n;
        }
    }
    cout << "not found\n";
}