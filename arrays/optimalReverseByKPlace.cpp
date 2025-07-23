#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];
        start++;
        end--;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    // input array
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
    reverseArray(arr, 0, n-1);

    // print array
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}