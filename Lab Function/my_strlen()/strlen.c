#include<stdio.h>

int my_strlen(char sen[]){
    int count = 0;
    while (sen[count] != 0){
        count++;
    }
    return count;
}

int main(){
    char str[100];
    scanf("%[^\n]%*c",str);
    int strLong = my_strlen(str);
    printf("%d",strLong);
    return 0;
}