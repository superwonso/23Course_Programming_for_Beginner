#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int ans = rand() % 100 + 1;
    int x = 0;
    int cnt = 1;

    while (x!=ans){
        printf("%03d 정답을 입력하세요: ", cnt);
        scanf("%d", &x);
        cnt++;
        if (x < ans) {
            printf("%d Up!\n", x);
        } else if (x > ans) {
            printf("%d Down!\n", x);
        } else {
            printf("%d 정답입니다!\n", x);
            break;
        }
    }

    return 0;
}

