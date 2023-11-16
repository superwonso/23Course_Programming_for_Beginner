#include <stdio.h>

int main() {
    int height, base;
    height = 456; base = 123;
    int result = height * base / 2;
    
    printf("밑변 길이가 %d이고 높이가 %d인 삼각형의 높이는 %d입니다. \n", base, height, result);

    return 0;
}