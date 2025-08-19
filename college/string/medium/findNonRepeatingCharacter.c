#include <stdio.h>

int brute_force(char *str, int n) {
    for (int i=0; i<n; i++) {
        int freq = 0;
        for (int j=0; j<n; j++) {
            if (str[i] == str[j]) {
                freq++;
            }
        }
        if (freq == 1) {
            printf("Unique: %c and %d\n", str[i], i);
            return 0;
        }
    }
    printf("Not found.\n");
    return 0;
}

int better_solution(char *ptr, int n) {
    char freq[256] = {0};

    for (int i=0; i<n; i++) {
        freq[*(ptr+i)]++;
    }

    for (int i=0; i<n; i++) {
        if (freq[*(ptr+i)] == 1) {
            printf("Unique: %c and %d\n", *(ptr+i), i);
            return 1;
        }
    }
    printf("Not found.\n");
    return 0;
}

int main() {
    char str[100];
    scanf("%s", str);

    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    brute_force(str, n);
    better_solution(str, n);
    return 0;
}