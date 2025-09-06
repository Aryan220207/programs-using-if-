#include<stdio.h>
void main()
{
    int i;
    char name[10];
    printf("Enter your name : ");
    scanf("%s",name);
    for(i=1;i<6;i++)
    {
        printf("%s\n",name);
    }
}
