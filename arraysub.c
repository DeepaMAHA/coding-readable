#iclude<stdio.h>
int subset(int a[100],b[20],m,n);
int main()
{
int a[100,b[20],m,n,i,j;
scand("%d\n%d\n",&m,&n);
for(i=0;i<m;i++)
scanf("%d",&a[i]);
for(j=0;j<n;j++)
scanf("%d",&b[i]);
f=subset(a[],b[],m,n);
if(f==1)
printf("a2 is subset of a1");
else
printf(ä2 is not a subset of a1");
return 0;
}
int subset(int a[],int b[],m,n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(b[i]==a[j])
break;
}
if(j==m)
return 0;
}
return 1;
}
