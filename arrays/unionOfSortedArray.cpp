#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1];
    int arr2[n2];

    vector<int> unionArr;

    cout << "Element for array1: ";
    for (int i=0; i<n1; i++) {
        cin >> arr1[i];
    }

    cout << "Element for array2: ";
    for (int i=0; i<n2; i++) {
        cin >> arr2[i];
    }

    int i = 0;
    int j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2) {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    // print array
    for (int i=0; i<unionArr.size(); i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;
}