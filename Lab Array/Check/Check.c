#include<stdio.h>
#include<string.h>

int main(){
    char ans[100];
    char checkAns[100];

    scanf(" %[^\n]%*c", ans);
    scanf(" %[^\n]%*c", checkAns);

    int score = 0;
    int lenAns = strlen(ans);
    int lenCheckAns = strlen(checkAns);

    for (int i = 0; i < lenAns; i++){

        if (lenCheckAns > lenAns){
            break;
        }

        if (ans[i] == checkAns[i]){
            score++;
        }

    }
    float percentScore = ((float)score / lenAns) * 100;
    printf("%d\n%.2f", score, percentScore);

}