#include <stdio.h>

void toUpper(char *ptr, int n) {
    for (int i=0; i<n; i++) {
        if (*(ptr+i) >= 'a' && *(ptr+i) <= 'z') {
            *(ptr+i) = *(ptr+i) - 32;
        }
    }
}

void toLower(char *ptr, int n) {
    for (int i=0; i<n; i++) {
        if (*(ptr+i) >= 'A' && *(ptr+i) <= 'Z') {
            *(ptr+i) = *(ptr+i) + 32;
        }
    }
}

int main() {
    char str[100];
    scanf("%s", str);

    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    toUpper(str, n);
    printf("%s\n", str);
    toLower(str, n);
    printf("%s\n", str);
}