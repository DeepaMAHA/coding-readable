#include<stdio.h>
int main()
{
char a,tmp;
int i,j;
scanf("%d",a);
for(i=0;i<strlen(a);i++)
{
tmp=a[i];
a[i]=a[i+1];
a[i+1]=tmp;
}
return 0;
}
