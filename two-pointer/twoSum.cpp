#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i=0; i<n; i++) cin >> nums[i];

    unordered_set<int> us;

    for (int el : nums) {
        int comp = target - el;
        if (us.find(comp) != us.end()) {
            cout << el << " + " << comp << " = " << target << "\n";
            return 0;
        }
        us.insert(el);
    }

    cout << "not found.\n";
}