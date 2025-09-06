#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter numbers of odd numbers you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\n",2*i-1);
    if(n==0)
    printf("Invalid entry");
}
