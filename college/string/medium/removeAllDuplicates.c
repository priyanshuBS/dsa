#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    int freq[256] = {0};

    for (int i=0; i<n; i++) {
        freq[str[i]]++;
    }

    char temp[100];
    int k = 0;
    for (int i=0; i<n; i++) {
        if (freq[str[i]] > 0) {
            temp[k] = str[i];
            k++;
            freq[str[i]] = 0;
        }
    }
    printf("%s\n", temp);
    return 0;
}