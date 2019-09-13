#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 2 numbers to swap");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("%d %d",a,b);
}
