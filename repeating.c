#include<stdio.h>
#include<stdli.h>
void repeating(int a[100],int n)
{
int i;
for(i=0;i<n;i++)
{
if(a[abs(a[i])]>=0)
(a[abs(a[i])])=-(a[abs(a[i])]);
else
printf("%d",abs(a[i]));
}
}
int main()
{
int a[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i);
repeating(a[100],n);
return0;
}


