#include <stdio.h>

int main() {
    int x,y;
    x = 2; y = 3;
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    
    printf("바뀐 x와 y의 값은 %d, %d입니다.\n", x, y);

    return 0;
}