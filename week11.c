#include <stdio.h>

int f[31];
int fibo_recur(int n);
int fibo_rep(int n);

int main() {
int n = 30;

if (fibo_recur(n) == fibo_rep(n)) printf("재귀적 방법과 반복적 방법의 fib(30)은 %d로 같습니다.\n", fibo_rep(n));

return 0;
}

int fibo_recur(int n) {
    if(n==1||n==2)
        return 1;
    else if(n==0)
        return 0;
    else
        return fibo_recur(n-1)+fibo_recur(n-2);
}

int fibo_rep(int n) {
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}