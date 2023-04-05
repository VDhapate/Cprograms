#include<stdio.h>
int main()
{
    int length,breadth,area;
    printf("enter value of length\n");
    scanf("%d",&length);
    printf("enter value of breadth\n");
    scanf("%d",&breadth);
    area= length*breadth;
    printf("area of rectangle is %d",area);
    return 0;
}