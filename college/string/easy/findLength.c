#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;

    scanf("%s", str);

    int size = 0;

    while (*(ptr+size) != '\0') {
        size++;
    }

    printf("Size: %d\n", size);
}