
#include<stdio.h>
int main()
{
int n,a=0,r,t,t1,sum=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=t%10;
a=a+r;
t=t/10;
}
printf("%d\n",a);
t1=a;
while(a)
{
r=a%10;
a=a/10;
sum=sum*10+r;
}
if(t1==sum)
{
printf("palindrome");
}
else
printf("Not a palindrome");
return 0;
}

    
