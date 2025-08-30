#include<stdio.h>
void main()
{
    int i,j,k;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&i,&j,&k);
    if(i>j)
        if(j>k)
            {
                printf("First is the greatest");
            }
    if(j>i)
        if(k>j)
        {
            printf("Third is greatest");
        }
    else
    {
        printf("Second is greatest");
    }
}
