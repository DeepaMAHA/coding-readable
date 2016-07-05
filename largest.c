#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d\n%d\n%d\n",&a,&b,&c);
if(a>b&&a>c)
printf("a is largest");
if(b>c&&b>a)
printf("b is largest");
else
printf("c is largest");
return 0;
}


