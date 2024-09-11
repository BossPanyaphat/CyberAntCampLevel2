#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int freq[MAX_SIZE] = {0}; 
    int arr[MAX_SIZE];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int mode = -1;

    for (int i = 0; i < MAX_SIZE; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mode = i;
        }
    }

    printf("%d", mode);

    return 0;
}
