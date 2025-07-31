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

    int cnt = 0;
    int ele; // this element appears majority of times in array ( > n/2)

    for (int i=0; i<n; i++) {
        if (cnt == 0) {
            cnt++;
            ele = nums[i];
        } else if (nums[i] == ele) cnt++;
        else cnt--;
    }

    cout << "Element appears majority of times: " << ele << endl;

}