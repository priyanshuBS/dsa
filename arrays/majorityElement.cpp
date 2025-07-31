#include <iostream>
#include <vector>
#include <map>
using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> nums(n);

//     for (int i=0; i<n; i++) {
//         cin >> nums[i];
//     }

//     map<int, int> mpp;

//     for (int i=0; i<n; i++) {
//         mpp[nums[i]]++;
//     }

//     for (auto it : mpp) {
//         if (it.second > (n/2)) {
//             cout << it.first << " Number of times it appear: " << it.second << endl;
//         }
//     }
// }


int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int count = 0;
    int ele;

    for (int i=0; i<n; i++) {
        if (count == 0) {
            count = 1;
            ele = nums[i];
        } else if (nums[i] == ele) count++;
        else count--;
    }

    int majorityEle = 0;
    for (int i=0; i<n; i++) {
        if (nums[i] == ele) majorityEle++;
    }

    cout << "Number of times it appear: " << majorityEle << " Element: " << ele << endl;
}