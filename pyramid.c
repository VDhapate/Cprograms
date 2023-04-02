#include<stdio.h>
void main()
{
int i=0,sum=0;
int j=0


for (i = 1; i <=6; i++) 
{
  printf("\n");     
for (int j = 1; j <=i; j++)
{
   
    printf("*");
   
}

 
}

int x,y,z,space=10;
for (x = 0; x <=5; x++)
{
  for (y = 0; y < space; y++)
  {
    printf(" ");
  }
  for (z = 0;  z< 2*x-1 ; z++)
  {
    printf("*");
  }
  space--;
  printf("\n");
  
}

}