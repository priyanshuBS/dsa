#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    map<int, int> mpp;

    for (int i=0; i<n; i++) {
        mpp[nums[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (n/2)) {
            cout << it.first << " Number of times it appear: " << it.second << endl;
        }
    }
}