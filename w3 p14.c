#include<stdio.h>
void main()
{
    int n[10],sum=0,avg,i;
    printf("Enter any 10 numbers :\n ");
    for(i=0;i<10;i++)
    {
        printf("value %d : ",i);
        scanf("%d\n",&n[i]);
        sum+=n[i];
        avg=sum/10;
    }
    printf("sum : %d\n",sum);
    printf("Avg is : %d",avg);
}
