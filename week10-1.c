#include <stdio.h>

int trans_to_min(int sec);
void print_time(int min, int sec);

int main() {
    int min, sec;
    printf("초를 입력하시오: ");
    scanf("%d", &sec);
    
    min = trans_to_min(sec);
    print_time(min, sec);

    return 0;
}

int trans_to_min(int sec) {
    return sec / 60;
}

void print_time(int min, int sec) {
    printf("%d분 %d초입니다.\n", min, sec);
}