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

    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    for (int i=0; i<n; i++) {
        if (nums[i] == 0) countZero++;
        else if (nums[i] == 1) countOne++;
        else if (nums[i] == 2) countTwo++;
    }

    for (int i=0; i<n; i++) {
        if (i < countZero) {
            nums[i] = 0;
        } else if (i >= countZero && i < (countZero + countOne)) {
            nums[i] = 1;
        } else {
            nums[i] = 2;
        }
    }

    for (int i=0; i<n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}