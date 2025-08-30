#include<stdio.h>
void main()
{
    int gs,a,d,s;
    printf("Enter gross salary : ");
    scanf("%d",&gs);
    if(gs>10000)
    {
        a=gs*10/100;
        d=gs*3/100;
    }
    if(gs>5000)
    {
        a=gs*7/100;
        d=gs*2/100;
    }
    s=gs+a-d;
    printf("Net salary is : %d",s);
}
