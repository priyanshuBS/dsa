#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i = 0;
    int j = s.size()-1; 

    while (i <= j) {
        if (s[i] == ' ') {
            i++;
        } else if (s[j] == ' ') {
            j--;
        } else{
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    for (int i=0; i<s.size(); i++) cout << s[i];
    cout << endl;
}