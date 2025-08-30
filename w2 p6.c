#include<stdio.h>
void main()
{
    int i,j,k,avg,t;
    printf("Enter marks of three subject : ");
    scanf("%d %d %d",&i,&j,&k);
    t=i+j+k;
    printf("total : %d\n",t);
    avg=(i+j+k)/3;
    printf("Average : %d\n",avg);
    if(avg>=70)
    {
        printf("Pass with distinction");
    }
    else if(avg>=60)
    {
        printf("first class");
    }
    else if(avg>=50)
    {
        printf("Second class");
    }
    else if(avg>=35)
    {
        printf("Third class");
    }
}
