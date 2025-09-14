#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, el;
    cin >> n >> el;

    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    // int i = 0;
    // int j = n-1;

    // while (i <= j) {
    //     if (nums[i] == el) {
    //         swap(nums[i], nums[j]);
    //         nums[j] = -1;
    //         j--;
    //     } else {
    //         i++;
    //     }
    // }

    // for (int i=0; i<n; i++) {
    //     cout << nums[i] << " ";
    // }
    // cout << "\n";

    int k = 0;
    for (int i=0; i<n; i++) {
        if (nums[i] != el) {
            nums[k] = nums[i];
            k++;
        }
    }

    for (int i=0; i<k; i++) cout << nums[i] << " ";
    cout << "\n";
}