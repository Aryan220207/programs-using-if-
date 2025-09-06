#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter no of even numbers : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i);
        sum+=2*i;
    }
    printf("Sum is : %d",sum);
}
