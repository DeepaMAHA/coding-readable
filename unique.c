#include<stdio.h>
int main()
{
int a[100],i,n,b[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
sanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
b[i]=1;
b[j]=1;
}
for(i=0;i<n;i++)
{
if(b[i]!=1)
printf("%d",b[i]);
}
return 0;
}
