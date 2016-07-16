#include<stdio.h>
int main()
{
int a[100],b,c,i;
scanf("%d",&c);
for(i=0;i<c;i++)
scanf("%d",&a[i]);
scanf("%d",&b);
for(i=b;i<c;i++)
printf("%d",a[i]);
for(i=0;i<b;i++)
printf("%d",a[i]);
return 0;
}
