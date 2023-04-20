#include<stdio.h>
int main()
{
    int length,breadth,area;
    printf("enter value of length\n");
    scanf("%d",&length);
    printf("enter value of breadth1\n");
    scanf("%d",&breadth);
    area= length*breadth;
    printf("area of rectangle is %d\n",area);
    
    int radius = 5;
    float pi= 3.14;
    printf("area of circle is%f\n",pi*radius*radius);
    int height = 10;
    printf("volume of the cylinder is %f\n",pi*radius*radius*height);
    
    return 0;
}