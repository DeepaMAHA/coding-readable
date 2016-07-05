#include<stdio.h>
#include<string.h>
int workingday(char a);
int main()
{
char a[20],f;
scanf("%s",a);
workingday(a);
if(f==1)
printf("True");
else
printf("false");
return o;
}
int workingday(char x)
{
int f;
if(x=='SUNDAY"||X=="Sunday")
f=0;

else
f=1;
return f;
}

