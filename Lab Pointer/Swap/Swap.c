#include<stdio.h>
int main(){
    int x,y;

    scanf("%d\n%d",&x,&y);

    int *ptx = &x;
    int *pty = &y;

    int temp = *ptx; //2
    *ptx = *pty;
    *pty = temp;
    printf("%d\n", x);
    printf("%d", y);
}