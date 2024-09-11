#include <stdio.h>
#include <string.h>

struct index
{
    int a;
    float b;
    char c;
    char str[100];
};

int main()
{
    struct index john;
    char nstr[100];
    // scanf("%d", &john.a); 
    // scanf("%f", &john.b); 
    // scanf(" %c", &john.c);
    // getchar();
    // scanf("%s", john.str); 
    scanf("%d %f %c %s", &john.a, &john.b, &john.c, john.str);
    int len = sizeof(john.a) + sizeof(john.b) + sizeof(john.c) + strlen(john.str) + 1;

    int strcSize =  sizeof(john.str[len]);
    printf("%d\n%0.3lf\n%c\n%s\n%d", john.a, john.b, john.c, john.str,len);

    return 0;
}
