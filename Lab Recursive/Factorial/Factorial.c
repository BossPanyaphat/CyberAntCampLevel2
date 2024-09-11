#include <stdio.h>

long long fac(int n);

int main() {
    int num;
    scanf("%d", &num);
    unsigned long long Ans = fac(num);
    printf("%lld", Ans);
    return 0;
}

long long fac(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 0){
        return 0;
    }else {
        return n * fac(n - 1);
    }
}
