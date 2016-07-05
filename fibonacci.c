#include<stdio.h>
int main()
{
int n,i,x1=0,x2=1,next=0;
scanf("%d",&n);
printf("%d\n%d\n",x1,x2);
for(i=3;i<=n;i++)

{
next=x1+x2;
x1=x2;
x2=next;
printf("%d\n",next);
}
return 0;
}
