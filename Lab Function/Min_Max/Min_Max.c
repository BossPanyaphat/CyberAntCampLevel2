#include<stdio.h>

int MAX,MIN;

void minMax(int array[], int quantity, int *MAX, int *MIN){
    *MIN = array[0];
    *MAX = array[0];
    for (int i =0; i < quantity; i++){
        if (array[i] > *MAX){
            *MAX = array[i];
        }else if(array[i] < *MIN){
            *MIN = array[i];
        }
    }
}

int main(){
    int quantity;
    scanf("%d",&quantity);
    int listOfNumber[quantity];
    for (int j = 0; j < quantity; j++){
        scanf("%d",&listOfNumber[j]);
    }
    minMax(listOfNumber, quantity, &MAX, &MIN);
    printf("%d\n%d", MAX, MIN);
    return 0;
}