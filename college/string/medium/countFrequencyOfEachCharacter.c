#include <stdio.h>
#include <stdbool.h>

void brute_force(char *ptr, int n) {
    if (n == 0) {
        printf("Empty string.\n");
    }
    for (int i=0; i<n; i++) {
        int freq = 0;
        for (int j=0; j<n; j++) {
            if (*(ptr+i) == *(ptr+j)) {
                freq++;
            }
        }
        printf("Character: %c and appears: %d\n", *(ptr+i), freq);
    }
}

void better_solution(char *str, int n) {
    char freq[256] = {0};
    for (int i=0; i<n; i++) {
        freq[*(str+i)]++;
    }

    bool visited[256] = {false};
    for (int i=0; i<n; i++) {
        if (!visited[*(str+i)]) {
            printf("Character: %c and appears: %d\n", *(str+i), freq[*(str+i)]);
            visited[*(str+i)] = true;
        }
        
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    brute_force(str, n-1);
    printf("\n");
    better_solution(str, n-1);

    return 0;
}