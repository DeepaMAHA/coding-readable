#include<stdio.h>
int main()
{
int n,num;
scanf("%d",&n);
while(n!=0)
{
num=num*10;
num=num+num%10;
n=n/10;
}
printf("%d",num);

return 0;}
