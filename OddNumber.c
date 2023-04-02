#include<stdio.h>
void main()
{
int i=0,sum=0;

for (i = 0; i < 100; i++) 
{
    if(i%2!=0)
   {
    printf("%d\n",i);
    sum=sum+i;
   }
}
printf("%d",sum);
}