#include<stdio.h>
void main()
{
    char name[10];
    int i,n;
    printf("Enter your name : ");
    scanf("%s",name);
    printf("How many times do you want to print your name : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%s\n",name);
    }
    }
