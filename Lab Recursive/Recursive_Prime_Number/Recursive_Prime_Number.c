#include <stdio.h>

int isPrime(int n, int i) {
    if (i == 1) {
        return 1; 
    } else {
        if (n % i == 0) {
            return 0; 
        } else {
            return isPrime(n, i - 1); 
        }
    }
}

int main() {
    int num;

    scanf("%d", &num);

    if (num < 2) {
        printf("False");
    } else {

        if (isPrime(num, num / 2) == 1) {
            printf("True");
        } else {
            printf("False");
        }
    }

    return 0;
}
