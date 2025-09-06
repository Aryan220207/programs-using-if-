#include<stdio.h>
void main()
{
    int i,sum=0;
    printf("Numbers divisible by 13 between 1 and 100 are :\n");
    for(i=1;i<=100;i++)
    {
        if(i%13==0)
        printf("%d\n",i);
        sum+=i;
    }
    printf("Sum is : %d",sum);
}
