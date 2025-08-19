#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Priyanshu Singh";

    int n = strlen(str);
    int ans = 0;

    for (int i=0; i<n; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            ans++;
        } else if (str[i] == 'e' || str[i] == 'E') {
            ans++;
        } else if (str[i] == 'i' || str[i] == 'I') {
            ans++;
        } else if (str[i] == 'o' || str[i] == 'O') {
            ans++;
        } else if (str[i] == 'u' || str[i] == 'U') {
            ans++;
        }
    }

    printf("Ans: %d\n", ans);
    return 0;
}