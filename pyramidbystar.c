#include<stdio.h>
void main()
{
    int num,i,j;
    printf("enter number of rows\n");
    scanf("%d",&num);
    for( i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }   
    
        printf("\n");
    }
}