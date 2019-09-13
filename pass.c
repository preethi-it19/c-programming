#include<stdio.h>
void main()
{
int a,b,c,d,e,total;
printf("enter your five marks");
scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e);
if(a>50&&b>50&&c>50&&d>50&&e>50)
printf("pass");
else
printf("fail");
total=a+b+c+d+e;
printf("\n the total is %d",total);
}
