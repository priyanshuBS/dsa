#include <stdio.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    int i = 0;
    int j = n-1;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s\n", str);
    return 0;
}