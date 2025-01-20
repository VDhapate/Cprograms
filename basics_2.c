#include<stdio.h>
void main()
{   int n,f,s,t, fo, fi,prdt;
    printf("enter value:");
    scanf("%d",&n);
    fi=n%10;
    n=n/10;
    fo=n%10;
    n=n/10;
    t=n%10;
    n=n/10;
    s=n%10;
    n=n/10;
    f=n%10;
    printf("\nthe first value:%d\nsecond value:%d\nthird value:%d",f,s,t);
    printf("\nthe fourth value:%d\nfifth value:%d",fo,fi);
    prdt=f*fi;
    printf("\nproduct of first and last digit is:%d",prdt);

}