#include <bits/stdc++.h>
using namespace std;

bool areEqual(vector<int> &a, vector<int> &b){
    unordered_map<int, int> mp;

    for (int &el: a) {
        mp[el]++;
    }
    for (int &el: b) {
        if (mp.find(el) == mp.end()) {
            return false;
        }
        if (mp[el] == 0) {
            return false;
        }
        mp[el]--;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    if (n != m) {
        cout << "Both array size are not equal!\n";
        return 0;
    }
    vector<int> arr(n);
    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    if (areEqual(arr, nums)) {
        cout << "Yes.\n";
    } else {
        cout << "No.\n";
    }
}