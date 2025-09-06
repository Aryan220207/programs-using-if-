#include<stdio.h>
void main()
{
    int i,n,factorial=1;
    printf("Enter number to get its factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d*",i);
        factorial*=i;
    }
    printf("\nFactorial of the number is : %d",factorial);
}
