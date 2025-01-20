#include<stdio.h>
void main()
{
    int n, sqr, last;
    printf("enter value :\t");
    scanf("%d",&n);
    last=n%10;
    printf("\n the last digit of value is %d",last);
    sqr=last*last;
 printf("\n the square of last digit is %d",sqr);
 if(sqr<50)
 {
    printf("\t and less than 50");
 }else{
    printf("\t and not less than 50");
 }
 //leap year
 int year;
 printf("\nenter year :\t");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        printf("\n leap year");
    }else{
        printf("\n not leap yrea");
    }
//nested if
//greatest of three no.
int n1, n2, n3;
 printf("\nenter 3 value :\t");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3){
         printf("%d is greatest",n1);}
         else{
            printf("%d is greatest",n3);
         }
    
    }
    else{
        if(n2>n3)
        {
            printf("%d is greatest",n2);
        }else{
            printf("%d is greatest",n3);
        }
    }
    //
    int a;
    printf("\nenter value :\t");
    scanf("%d",&a);
    if(a%2==0)
    {
        if(a%3==0)
        {
            printf("\n no is divisible by 2 and 3");
        }else{
           printf("\n no is divisible by 2 but not 3"); 
        }
    }else{
        if(a%3==0)
        {
            printf("\n no is divisible by 3 but not 2");
        }else{
           printf("\n no is not divisible by 2 nor 3"); 
        }
    }
//positive negative or zero
int x;
printf("\nenter value :\t");
    scanf("%d",&x);
    if(x>=0){
        if(x==0)
        {
            printf("\nnumber is 0");
        }else{
            printf("\nnumber is positive");
        }
    }else{
        printf("\nnumber is negative");
    }

}