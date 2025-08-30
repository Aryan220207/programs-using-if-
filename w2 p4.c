#include<stdio.h>
void main()
{
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    if(i%7==0)
    {
        printf("Number is divisible by 7 ");
    }
    else
    {
        printf("Number is not divisible by 7");
    }
}
