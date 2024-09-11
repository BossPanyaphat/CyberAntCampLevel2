#include<stdio.h>

int my_strCmd(char firstSen[], char secondSen[]){
    int i = 0;
    while (firstSen[i] != '\0' && secondSen[i] != '\0') {
        if (firstSen[i] < secondSen[i]) {
            return -1;
        }
        if (firstSen[i] > secondSen[i]) {
            return 1;
        }
        i++;
    }
    if (firstSen[i] == '\0' && secondSen[i] == '\0') {
        return 0;
    }else if (firstSen[i] == '\0') {
        return -1;
    } else {
        return 1; 
    }
}

int main(){
    char firstStr[100];
    char secondStr[100];
    scanf(" %[^\n]%*c", firstStr);
    scanf(" %[^\n]%*c", secondStr);
    printf("%d", my_strCmd(firstStr, secondStr));
    return 0;
}
