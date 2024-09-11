
#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int listOfNumber[size];
    for (int i = 0; i < size; i++){
        int num;
        scanf("%d",&num);
        int *ptnum = &num;
        listOfNumber[i] = *ptnum;
    }

    for (int j = 0; j < size; j++){
        printf("%d ",listOfNumber[j]);
    }
    return 0;
}