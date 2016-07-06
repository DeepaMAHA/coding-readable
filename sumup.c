#include<stdio.h>
int main()
{
int i,a[100],n,t,target;
scanf("%d",&n);
scanf("\n%d",&target);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]<a[i+1)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
for(i=0;i<n;i++)
{
if(a[i]+a[i+1]==target)
printf(""%d\n%d",a[i],a[i+1]);
}
return 0;
}

