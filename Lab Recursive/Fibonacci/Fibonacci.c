#include <stdio.h>

double fib(int n); 

int main() {
    int num;
    scanf("%d", &num);
    int Ans = fibo(num);
    printf("%d", Ans);
    return 0;
}

double fib(int n) {
    if (n == 1) {
        return 1;
    }else if (n == 0){
        return 0;
    } else {
        return fib( n - 1) + fib(n - 2); 
    }
}
