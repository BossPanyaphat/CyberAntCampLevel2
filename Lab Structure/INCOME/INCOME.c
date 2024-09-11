#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[100];
    int monthlyIncome;
    char appearance[100];
    int reven;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Employee person[n];

    for (int i = 0; i < n; i++){
        scanf("%s",person[i].name);
        scanf("%d",&person[i].monthlyIncome);
        scanf("%s",person[i].appearance);
    }

    int j;
    int revenue;
    float sumApp;
    float inVinCount = 0;
    for (j = 0; j < n; j++)
    {
        sumApp = strlen(person[j].appearance);
        for (int k = 0; k < sumApp; k++)
        {
            if(person[j].appearance[k] == 'N'){
                inVinCount++;
            }
        }
        float revenCaled = person[j].monthlyIncome * (1-(inVinCount/sumApp));
        person[j].reven = revenCaled;
        revenCaled = 0;
        sumApp = 0;
        inVinCount = 0;
    }

    for (int l = 0; l < n; l++){
        printf("%s ",person[l].name);
        printf("%d\n",person[l].reven);
    }

    return 0;
}
