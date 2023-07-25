#include <stdio.h>
#include <string.h>
int main()
{
    char names[20][100] = {"vishal","golu","aman","raja","kumar"};
    char user_name[100];
    int i, j, max = 10, num, facto = 1;

    printf("\n\nenter your name : ");
    fgets(user_name, 100, stdin);
    for(i = 0;user_name[i];i++);
    user_name[i-1] = 0;

    for (i = 0; i < max; i++)
    {
        if (strcmp(user_name, names[i]) == 0)
        {
            printf("\nEnter a number to calculate factorial : ");
            scanf("%d", &num);
            for (j = 2; j <= num; j++)
            {
                facto *= j;
            }
            printf("\nfactorial of %d is %d\n\n", num, facto);
            break;
        }
    }
    return 0;
}