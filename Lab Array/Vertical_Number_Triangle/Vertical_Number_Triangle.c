#include <stdio.h>

void printTriangle(int rows) {

    for (int i = 1; i <= rows; i++) {
        int num = i; 
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num += rows - j; 
        }
        printf("\n");
    }
}

int main() {
    int rows;
    scanf("%d", &rows);

    printTriangle(rows);

    return 0;
}
