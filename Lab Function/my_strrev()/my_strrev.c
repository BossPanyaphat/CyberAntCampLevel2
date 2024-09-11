#include<stdio.h>
#include<string.h>

void strRev(char sen[], int strLong ,char strTranForm[]){
    for ( int i = 0; i < strLong; i++){
        strTranForm[i] = sen[strLong - i - 1];
    }
    strTranForm[strLong] = '\0';
}
int main(){
    char str[100];
    scanf("%[^\n]%*c",str);
    int strLong = strlen(str);
    char strTranForm[strLong];
    strRev(str, strLong , strTranForm);
    printf("%s",strTranForm);
    return 0;
}