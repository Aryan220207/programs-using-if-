#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter no of natural numbers : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum+=i;
    }
    printf("Sum is : %d",sum);
}
