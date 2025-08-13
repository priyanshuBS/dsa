#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void brute_force_approch(vector<int> &arr, int n) {
    vector<int> leaders;

    for (int i=0; i<n; i++) {
        int leader = 1;
        for (int j=i; j<n; j++) {
            if (arr[j] > arr[i]) {
                leader = 0;
                break;
            }
        }
        if (leader == 1) leaders.push_back(arr[i]);
    }

    for (int i=0; i<leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << "\n";
}

void optimal_solution(vector<int> &arr, int n) {
    vector<int> leaders;
    int maxi = INT_MIN;
    for (int i=n-1; i>=0; i--) {
        if (arr[i] > max) {
            leaders.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }

    for (int i=0; i<leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    brute_force_approch(arr, n);
    optimal_solution(arr, n);
}