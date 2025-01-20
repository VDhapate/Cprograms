
#include<stdio.h>
void main()
{
    // calculate sum of square of three numbers taking from user
    int a, b, c, A, B, C, sum;
    printf("\nenter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    A=a*a;
    B=b*b;
    C=c*c;
    sum=A+B+C;
    printf("\nsum of sqr of 3 no is = %d",sum);
//Q&R
    int x, y, Q, R;
    printf("\nenter the value of x and y:\n");
    scanf("%d%d",&x,&y);
    Q=x/y;
    R=x%y;
    printf("\n the quotient is %d",Q);
    printf("\n the remainder is %d",R);
//area of sqr
    int d, f;
    printf("\n enter the value of side:\n");
    scanf("%d",&d);
    f=d*d;
    printf("\n the area of sqr is %d",f);
}