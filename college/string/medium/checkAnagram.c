#include <stdio.h>
#include <string.h>

void better_solution(char *ptr1, char *ptr2, int n) {
    if (strlen(ptr1) != strlen(ptr2)) {
        printf("Not anagram.\n");
        return;
    }
    char s1[256] = {0};
    char s2[256] = {0};

    for (int i=0; i<n; i++) {
        s1[*(ptr1+i)]++;
    }
    for (int i=0; i<n; i++) {
        s2[*(ptr2+i)]++;
    }

    for (int i=0; i<n; i++) {
        if (s1[*(ptr1+i)] != s2[*(ptr1+i)]) {
            printf("Not anagram.\n");
            return;
        }
    }
    printf("Anagram.\n");
}

int main() {
    char str1[100];
    char str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    int n = 0;
    while (str1[n] != '\0') {
        n++;
    }

    better_solution(str1, str2, n);
}