#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][30];
    int i;
    printf("Enter 5 Strings=");
    for(i=0 ; i<=4 ; i++)
        fgets(a[i],30,stdin);
    for(i=0 ; i<=4 ; i++)
    printf("Display = %s",a[i]);
    return 0;
}

