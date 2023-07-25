#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char word[40][20]={"my","name","is","vishal"};
    char word1[]="my";
    char word2[]="vishal";
    int i,w1=-1,w2=-1,min=1000,temp;
    for(i=0;i<5;i++)
    {
        if(strcmp(word[i],word1)==0)
        w1=i;
        if(strcmp(word[i],word2)==0)
        w2=i;
        if(w1!=-1&&w2!=-1)
        {
            temp=abs(w2-w1);
            if(temp<min)
            min=temp;
        }
    }
    printf("%d",min-1);
    return 0;
}

