#include<stdio.h>
#include<string.h>
int main()
{
    char h[5][50]={"Apple","Mango","Banana","Orange","Grapes"},j[50];
    int a,b;
    printf("Enter Name=");
    gets(j);
    for(a=0 ; a<=4 ; a++ )
    {
        b=strcmp(h[a],j);
        if(b==0)
        {
            printf("yes It is Match");
            break;
        }
    }
    if(a==5)
        printf("Not match");
    return 0;
}
