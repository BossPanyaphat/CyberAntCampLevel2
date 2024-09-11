#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b); 
    }
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int gcdResult = gcd(num1, num2);
    int lcmResult = lcm(num1, num2);

    printf("%d %d", gcdResult, lcmResult);

    return 0;
}
