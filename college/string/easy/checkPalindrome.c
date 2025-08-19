#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    int k = 0;
    while (str[k] != '\0') {
        str[k] = tolower(str[k]);
        k++;
    }

    int n = strlen(str);

    int i = 0;
    int j = n-1;

    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not palindrome!\n");
            return 0;
        } else {
            i++;
            j--;
        }
    }
    printf("Palindrome.\n");
    return 0;
}