#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int maxSum = 0;
    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=i; j<n; j++) {
            sum += nums[j];
            if (sum > maxSum) maxSum = sum;
        }
    }

    cout << maxSum << endl;
}