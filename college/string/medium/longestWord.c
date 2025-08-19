#include <stdio.h>
#include <string.h>

char *word(char *ptr, int i, int j) {
    int temp[100];
    int k = 0;
    for (int i=0; i<j; i++) {
        temp[k] = *(ptr+i);
    }
    return temp;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    int temp[100];

    int i = 0;
    int j = 1;

    while (i < j) {
        if (str[j] == ' ') {
            temp = word(str, i, j);
            i = j+1;
            j = i+1;
        }
    }

    printf("%c\n", temp);
}