#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    // int k = 0;
    // for (int i=0; i<n; i++) {
    //     if (nums[i] != 0) {
    //         nums[k] = nums[i];
    //         k++;
    //     }
    // }

    // for (int i=n-1; i>=k; i--) {
    //     nums[i] = 0;
    // }

    int j = -1;

    for (int i=0; i<n; i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) {
        cout << "No zero found.\n";
        return 0;
    }

    for (int i=j+1; i<n; i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }


    for (int i=0; i<n; i++) cout << nums[i] << " ";
    cout << endl;
}