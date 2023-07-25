#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][30];
    int i,j;
    printf("enter the string\n");
    for(i=0;i<=4;i++)
    {
        gets(a[i]);
    }
    for (i=0;i<=4;i++)
    {
        if(strchr(a[i],'@')!=0)
        {
            printf("%s\n",a[i]);
        }
    }
    
    return 0;
}