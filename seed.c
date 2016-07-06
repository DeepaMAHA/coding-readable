#include<stdio.h>
int main()
{
int tem,product=1,y,x;
scanf("%d",&tem);
y=tem;
if(tem!=0)
{
while(y!=0)
{
x=y%10;
y=y/10;
product=product*x;
}
printf("%d",product*tem);
}
else
printf("0");
return 0;
}
