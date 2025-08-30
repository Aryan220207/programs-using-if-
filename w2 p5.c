#include<stdio.h>
void main()
{
    int gs,d,ns;
    printf("Enter gross sale : ");
    scanf("%d",&gs);
    if(gs>=20000)
    {
        d=gs*15/100;
    }
    else if(gs>=10000)
    {
        d=gs*10/100;
    }
    else
    {
        d=gs*5/100;
    }
    ns=gs-d;
    printf("Net sale is : %d",ns);
}

