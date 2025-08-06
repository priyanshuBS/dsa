#include <iostream>
#include <vector>
using namespace std;

// int main() {
//     int size;
//     cin >> size;

//     vector<int> nums(size);
//     vector<int> pos(size/2);
//     vector<int> neg(size/2);

//     for (int i=0; i<size; i++) {
//         cin >> nums[i];
//     }

//     int n = 0;
//     int p = 0;

//     for (int i=0; i<size; i++) {
//         if (nums[i] < 0) {
//             neg[n] = nums[i];
//             n++;
//         } else {
//             pos[p] = nums[i];
//             p++;
//         }
//     }

//     p = 0;
//     n = 0;
//     for (int i=0; i<size; i++) {
//         if (i&1) {
//             nums[i] = neg[n];
//             n++;
//         } else {
//             nums[i] = pos[p];
//             p++;
//         }
//     }

//     for (int i=0; i<size; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << "\n";
// }


int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    vector<int> ans(n);

    int pos = 0;
    int neg = 0;
    for (int i=0; i<n; i++) {
        cin >> nums[i];
        if (nums[i] < 0) {
            ans[2*neg+1] = nums[i];
            neg++;
        } else {
            ans[2*pos] = nums[i];
            pos++;
        }
    }

    for (int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}