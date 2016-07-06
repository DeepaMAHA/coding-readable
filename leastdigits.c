#include<stdio.h>
int main()
{
int num,k;
scanf("%d",&num);
scanf("%d",&k);
printf("%d",reduce(int num,int k));
return ;
}
int reduce(int num,int k)
{
if(k<=0)
return num;
if(num==0)
return 10;
int path1=reduce(num/10,k)*10+num%10;
int path2=reduce(num/10,k-1)
return path1<path2 ? path1 : path2;
}
