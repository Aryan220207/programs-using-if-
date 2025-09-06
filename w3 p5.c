#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter numbers of even numbers you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\n",2*i);
    if(n==0)
    printf("Invalid entry");
}
