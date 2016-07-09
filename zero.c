#include<stdio.h>
int main()
{
int i,a[100],n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]+a[i+1]=0)
{
printf("%d %d",a[i],a[i+1]);
}
}
return 0;
}


