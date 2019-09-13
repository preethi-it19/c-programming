#include<stdio.h>
void main()
{
int n=10,i,a,c;
printf("enter a number");
scanf("%d",&a);
for(i=1;i<=n;i++)
{
c=i*a;
printf("%d*%d=%d\n",i,a,c);
}
}
