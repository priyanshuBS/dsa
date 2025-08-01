#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    string ans = "";

    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] =   {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for (int i=0; i<13; i++) {
        while (num >= values[i]) {
            ans += symbols[i];
            num -= values[i];
        }
    }

    cout << ans << endl;
}