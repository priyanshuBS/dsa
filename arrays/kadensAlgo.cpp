#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int sum = 0;
    int maxi = INT_MIN;

    int start;
    int ansStart = -1;
    int ansEnd = -1;

    for (int i=0; i<n; i++) {
        if (sum == 0) start = i;
        sum += nums[i];
        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0) sum = 0;
    }

    cout << "start index " << ansStart << " end index " << ansEnd << endl;

    cout << "Maximum sum subarray " maxi << endl;
}