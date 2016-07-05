#include<stdio.h>
int main()
{
int a,num=0;
scanf("%d",&a);
while(a!=0)
{
b=a%10;
a=a/10;
num=num+a;
}
if(a==num)
printf("palindrome");
else
printf("not a palindrome");
retun 0;
}
