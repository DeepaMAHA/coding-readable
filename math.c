#include<stdio.h>
int main()
{
int a,i,b;
scanf("%d%d",&a,&b);
while(a>=b)
{
a=a-b;
i++;
}
printf("%d%d",i,a);
return 0;
}

    
