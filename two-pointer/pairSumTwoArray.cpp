#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, x;
    cin >> n1 >> n2 >> x;

    vector<int> arr1(n1);
    vector<int> arr2(n2);

    for (int i=0; i<n1; i++) cin >> arr1[i];
    for (int i=0; i<n2; i++) cin >> arr2[i];

    int diff = INT_MAX;
    vector<int> res(2);

    // for (int i=0; i<n1; i++) {
    //     for (int j=0; j<n2; j++) {
    //         int sum = arr1[i] + arr2[j];

    //         if (abs(sum - x) < diff) {
    //             diff = abs(sum-x);
    //             res[0] = arr1[i];
    //             res[1] = arr2[j];
    //         }
    //     }
    // }

    // using two pointer approch 

    int l = 0;
    int r = n2-1;

    while (l < n1 && r >= 0) {
        int sum = arr1[l] + arr2[r];

        if (abs(sum - x) < diff) {
            diff = abs(sum - x);
            res[0] = arr1[l];
            res[1] = arr2[r];
        }

        if (sum > x) {
            r--;
        } else {
            l++;
        }
    }

    cout << res[0] << " " << res[1] << endl;
}