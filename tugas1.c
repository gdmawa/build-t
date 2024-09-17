#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;

    scanf("%d", &N);

    int nilai[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    qsort(nilai, N, sizeof(int), compare);

    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}
