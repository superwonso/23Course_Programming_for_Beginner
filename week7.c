#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;
    while (sum <= 10000) {
        sum += i;
        if (sum > 10000) {
            sum-=i; break;
        }
        i++;
    }
    printf("1부터 %d까지의 합은 %d이다.\n", i-1, sum);

    return 0;
}