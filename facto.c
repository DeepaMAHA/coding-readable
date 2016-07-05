#include<stdio.h>
int main()
{
int n,i,fact=1;
scanf("%d",&n);
if(n==0||n==1)
printf("1");
else
for(i=1;i<=n;i++)
{
fact=fact*n;
}
printf("%d",fact);
return 0;}
