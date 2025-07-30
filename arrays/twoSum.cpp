#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int left = 0;
    int right = n-1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == t) {
            cout << "Yes\n";
            return 0;
        } else if (sum < t) left++;
        else right++;
    }
    cout << "No\n";
    return 0;
}