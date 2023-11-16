#include <stdio.h>

int main() {
    // 1부터 n까지의 합이 10000을 넘지 않는 가장 큰 n을 구하고, 그 때의 합을 출력하시오.
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