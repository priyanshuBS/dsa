#include <iostream>
#include <vector>
using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     int newSize = n + 1;

//     vector<int> hashArr(newSize, 0);

//     for (int i=0; i<n; i++) {
//         hashArr[arr[i]] = 1;
//     }


//     for (int i=1; i<n+1; i++) {
//         if (hashArr[i] == 0) {
//             cout << "Missing number is " << i << endl;
//             break;
//         }
//     }
// }


// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     int arrSum = 0;

//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//         arrSum += arr[i];
//     }

//     int sumOfN = (n*(n+1))/2;

//     cout << "Missing number: " << sumOfN - arrSum << endl;
// }

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    int xor1 = 0;
    int xor2 = 0;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        xor2 ^= arr[i];
    }

    for (int i=1; i<=n+1; i++) {
        xor1 ^= i;
    }

    int result = xor1 ^ xor2;

    cout << "Missing number: " << result << endl;
}