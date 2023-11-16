#include <stdio.h>

void print_stars_right_aligned(int n);

int main() {
    int n;
    printf("N의 값을 입력하시오: ");
    scanf("%d", &n);

    print_stars_right_aligned(n);

    return 0;
}

void print_stars_right_aligned(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
}
