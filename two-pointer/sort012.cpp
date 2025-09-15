#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i=0; i<n; i++) cin >> nums[i];

    int low = 0;
    int mid = 0;
    int high = nums.size()-1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
        } else {
            mid++;
        }
    }

    for (int i=0; i<n; i++) cout << nums[i] << " ";
    cout << endl;
}